/*!
 *  \file      customplotitem.cpp
 *  \brief     Custom plotting class.
 *  \details   This class is used to plot the A-Scan graph from UT gauge.
 *  \author    Charith Reddy
 *  \copyright Copyright (C) 2022 Octobotics Tech Pvt. Ltd. All Rights Reserved.
                Do not remove this copyright notice.
                Do not use, reuse, copy, merge, publish, sub-license, sell, distribute or modify this code - except without explicit,
                written permission from Octobotics Tech Pvt. Ltd.
                Contact connect@octobotics.tech for full license information.

 *  \todo      None
 *  \warning   Improper use can crash the application
 */


#include "customplotitem.h"
#include "qcustomplot.h"
#include <QDebug>
#include <math.h>

//global variables
QVector<double> x_data(320), y_data(320), tuple(3),tup_y(3);
int trig = 0;
int x_range;

/*!
 * \brief CustomPlotItem::CustomPlotItem: constructor
 */
CustomPlotItem::CustomPlotItem( QQuickItem* parent ) : QQuickPaintedItem( parent )
  , m_CustomPlot( nullptr )
{
    //new ros object
    RosThread *m_ros = new RosThread();
    setFlag( QQuickItem::ItemHasContents, true );
    setAcceptedMouseButtons( Qt::AllButtons );
    connect( this, &QQuickPaintedItem::widthChanged, this, &CustomPlotItem::updateCustomPlotSize );
    connect( this, &QQuickPaintedItem::heightChanged, this, &CustomPlotItem::updateCustomPlotSize );
    //replot loop
    connect( m_CustomPlot, &QCustomPlot::afterReplot, this, &CustomPlotItem::onCustomReplot );
    connect(this,SIGNAL(saveImg(QString)), m_ros,SLOT(saveImg(QString)) );

}
/*!
 * \brief CustomPlotItem::~CustomPlotItem: destructor
 */
CustomPlotItem::~CustomPlotItem()
{
    delete m_CustomPlot;
    m_CustomPlot = nullptr;
}

/*!
 * \brief CustomPlotItem::initCustomPlot initializes the plot
 */
void CustomPlotItem::initCustomPlot()
{

    m_CustomPlot = new QCustomPlot();
    updateCustomPlotSize();
    setupPlot(m_CustomPlot);
    realtimeDataSlot();
    connect( m_CustomPlot, &QCustomPlot::afterReplot, this, &CustomPlotItem::onCustomReplot );
    m_CustomPlot->replot();
}

/*!
 * \brief CustomPlotItem::paint draws pixmap of the plot
 * \param painter
 */
void CustomPlotItem::paint( QPainter* painter )
{
    if (m_CustomPlot)
    {
        QPixmap    picture( boundingRect().size().toSize() );
        QCPPainter qcpPainter( &picture );
        m_CustomPlot->toPainter( &qcpPainter );
        painter->drawPixmap( QPoint(), picture );

    }
}

/*!
 * \brief CustomPlotItem::setupPlot sets axes, color and other details of the plot
 * \param customPlot
 */
void CustomPlotItem::setupPlot(QCustomPlot* customPlot)
{
    customPlot->addGraph();
    for (int i=0; i<320; ++i)
    {
        x_data[i] = (double)(printRandoms(0,320));
        y_data[i] = (double)(printRandoms(0,255));

    }
    for (int i=0;i <3 ;++i ) {
        tup_y[i] =0;
        tuple[i]=0;

    }
    x_range = 240;

    customPlot->graph(0)->setData( y_data, x_data );
    customPlot->graph(0)->setPen(QPen(QColor(0, 211, 0)));

    customPlot->addGraph();
    customPlot->graph( 1 )->setPen( QPen(QColor(255, 255, 0) ) );


    customPlot->graph( 1 )->setScatterStyle(
    QCPScatterStyle( QCPScatterStyle::ssDisc, 8 ) );
    customPlot->graph( 1 )->setLineStyle( QCPGraph::lsNone );
    customPlot->graph( 1 )->setAdaptiveSampling( false );
    customPlot->graph( 1 )->setData( tuple, tup_y );




    customPlot->xAxis->setRange(0,320);
    customPlot->yAxis->setRange(0, 255);

    customPlot->setBackground(QBrush(Qt::black));
    customPlot->xAxis->setTickLabelColor(Qt::white);
    customPlot->xAxis->setLabelColor(Qt::white);
    customPlot->xAxis->setBasePen(QPen(Qt::white));
    customPlot->xAxis->setTickPen(QPen(Qt::white));
    customPlot->xAxis->setSubTickPen(QPen(Qt::white));

    customPlot->yAxis->setTickLabelColor(Qt::white);
    customPlot->yAxis->setBasePen(QPen(Qt::white));
    customPlot->yAxis->setLabelColor(Qt::white);
    customPlot->yAxis->setTickPen(QPen(Qt::white));
    customPlot->yAxis->setSubTickPen(QPen(Qt::white));

    // setup a timer that repeatedly calls MainWindow::realtimeDataSlot:
    dataTimer = new QTimer(this);
    graphTimer = new QTimer(this);

    connect(dataTimer, SIGNAL(timeout()), this, SLOT(realtimeDataSlot()));
    connect(graphTimer, SIGNAL(timeout()), this, SLOT(graph_rpt()));
    trig = 0;
    dataTimer->start(2);
    graphTimer->start(100);

}

/*!
 * \brief CustomPlotItem::printRandoms returns random values between two numbers
 * \param lower: lower value
 * \param upper: higher value
 * \return random values
 */
int CustomPlotItem::printRandoms(int lower,int upper)
{
    return (rand()%(upper-lower+1))+lower;
}

/*!
 * \brief CustomPlotItem::graph_rpt not being used currently
 */
void CustomPlotItem::graph_rpt()
{
//unused

}

/*!
 * \brief CustomPlotItem::updateCustomPlotSize sets geometry of the custom plot
 */
void CustomPlotItem::updateCustomPlotSize()
{
    if (m_CustomPlot)
    {
        m_CustomPlot->setGeometry( 0, 0, width(), height() );
    }
}

/*!
 * \brief CustomPlotItem::onCustomReplot: calls replot after plotting
 */
void CustomPlotItem::onCustomReplot()
{
    update();
}

/*!
 * \brief CustomPlotItem::realtimeDataSlot updates the graph from ros data in real time
 */
void CustomPlotItem::realtimeDataSlot()
{

    // add data to lines:
    m_CustomPlot->graph(0)->data()->clear();
    m_CustomPlot->graph(1)->data()->clear();
    m_CustomPlot->xAxis->setRange(0,x_range);

    m_CustomPlot->graph(0)->addData(y_data,x_data);
    m_CustomPlot->graph(1)->addData( tuple, tup_y );
    //      qDebug()<<"tuple"<<trig;
    if (trig == 1)
    {
        saveImgFun(100);

    }
    m_CustomPlot->replot();
}

/*!
 * \brief CustomPlotItem::trigImg triggers the variable to get a snapshot of the graph
 * \param k
 */
void CustomPlotItem::trigImg(int k)
{

    trig = 1;
}
/*!
 * \brief CustomPlotItem::saveImgk
 * \param m
 */
void CustomPlotItem::saveImgk(int m)
{

    m_CustomPlot->savePng("SCREENSHOT/graph_.png");

}

/*!
 * \brief CustomPlotItem::saveImgFun saves the image in the Screenshot folder with current date and time
 * \param m unused
 */
void CustomPlotItem::saveImgFun(int m)
{
    m_CustomPlot->savePng("SCREENSHOT/g1.png");
    graph_img_ = m_CustomPlot->toPixmap().toImage();

    auto t = std::time(nullptr);
    auto tm = *std::localtime(&t);

    std::ostringstream oss;
    oss << std::put_time(&tm, "%d-%m-%Y_%H-%M-%S");
    auto str = oss.str();
    QString k = QString::fromUtf8(str.c_str());
    m_CustomPlot->savePng("SCREENSHOT/graph_"+k+".png");
    emit saveImg("SCREENSHOT/graph_"+k+".png");
    trig = 0;

}

/*!
 * \brief CustomPlotItem::graphCall gets data from ros thread and assigns them to global variables
 * \param v: 320 values coming from the UT graph node
 * \param tup: tuple of echoes
 * \param x_range1 current range of X axis to fit all the 320 values
 *
 */
void CustomPlotItem::graphCall(QVector<double> v, QVector<double> tup, int64_t x_range1)
{

    QVector<double> y(320), ty(3);
    for (int i=0; i<320; ++i)
    {
        y[i] = (x_range/320.0)*i;
//        qDebug() <<"y:"<< y[i]<< "and i is "<< i;

    }

    tuple  = tup;
    x_data = v;
    y_data = y;
    x_range = x_range1;
    //qDebug() << y;
    for(int i=0; i<3;++i)
    {
        if (tuple[i]>=16000)
        {
            ty[i] = 0;

        }
        else
            tuple[i] = (int)tuple[i]/10;
        ty[i] = 100;
    }
    tup_y = ty;

}

