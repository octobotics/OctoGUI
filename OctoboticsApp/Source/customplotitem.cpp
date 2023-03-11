#include "customplotitem.h"
#include "qcustomplot.h"
#include <QDebug>
#include <math.h>
QVector<double> x_data(320), y_data(320), tuple(3),tup_y(3);
int trig = 0;
int x_range;

CustomPlotItem::CustomPlotItem( QQuickItem* parent ) : QQuickPaintedItem( parent )
  , m_CustomPlot( nullptr )
{
    RosThread *m_ros = new RosThread();
    setFlag( QQuickItem::ItemHasContents, true );
    setAcceptedMouseButtons( Qt::AllButtons );
    connect( this, &QQuickPaintedItem::widthChanged, this, &CustomPlotItem::updateCustomPlotSize );
    connect( this, &QQuickPaintedItem::heightChanged, this, &CustomPlotItem::updateCustomPlotSize );
    connect( m_CustomPlot, &QCustomPlot::afterReplot, this, &CustomPlotItem::onCustomReplot );
    connect(this,SIGNAL(saveImg(QString)), m_ros,SLOT(saveImg(QString)) );

}
CustomPlotItem::~CustomPlotItem()
{
    delete m_CustomPlot;
    m_CustomPlot = nullptr;
}


void CustomPlotItem::initCustomPlot()
{

    m_CustomPlot = new QCustomPlot();
    updateCustomPlotSize();
    setupPlot(m_CustomPlot);
    realtimeDataSlot();
    connect( m_CustomPlot, &QCustomPlot::afterReplot, this, &CustomPlotItem::onCustomReplot );
    m_CustomPlot->replot();
}


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
    {   // qDebug()<<trig<<"-----------------------------";

        saveImgFun(100);

    }



    m_CustomPlot->replot();
}
void CustomPlotItem::graph_rpt()
{
//unused

}
void CustomPlotItem::trigImg(int k)
{

    trig = 1;
}

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
    //    qDebug()<<myImage;
    emit saveImg("SCREENSHOT/graph_"+k+".png");
    trig = 0;

}
void CustomPlotItem::saveImgk(int m)
{

    m_CustomPlot->savePng("SCREENSHOT/graph_.png");


}
void CustomPlotItem::updateCustomPlotSize()
{
    if (m_CustomPlot)
    {
        m_CustomPlot->setGeometry( 0, 0, width(), height() );
    }
}

void CustomPlotItem::onCustomReplot()
{
    //    qDebug() << Q_FUNC_INFO;
    update();
}



int CustomPlotItem::printRandoms(int lower,int upper)
{
    return (rand()%(upper-lower+1))+lower;
}


void CustomPlotItem::graphCall(QVector<double> v, QVector<double> tup, int64_t x_range1)
{

    QVector<double> y(320), ty(3);
    for (int i=0; i<320; ++i)
    {
        y[i] = (x_range/320.0)*i;
        qDebug() <<"y:"<< y[i]<< "and i is "<< i;

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


void CustomPlotItem::mousePressEvent( QMouseEvent* event )
{
    //qDebug() << Q_FUNC_INFO;
    routeMouseEvents( event );
}

void CustomPlotItem::mouseReleaseEvent( QMouseEvent* event )
{
    // qDebug() << Q_FUNC_INFO;
    routeMouseEvents( event );
}

void CustomPlotItem::mouseMoveEvent( QMouseEvent* event )
{
    routeMouseEvents( event );
}

void CustomPlotItem::mouseDoubleClickEvent( QMouseEvent* event )
{
    //qDebug() << Q_FUNC_INFO;
    routeMouseEvents( event );
}

void CustomPlotItem::graphClicked( QCPAbstractPlottable* plottable )
{
    //qDebug() << Q_FUNC_INFO << QString( "Clicked on graph '%1 " ).arg( plottable->name() );
}

void CustomPlotItem::routeMouseEvents( QMouseEvent* event )
{
    if (m_CustomPlot)
    {
        QMouseEvent* newEvent = new QMouseEvent( event->type(), event->localPos(), event->button(), event->buttons(), event->modifiers() );
        //QCoreApplication::sendEvent( m_CustomPlot, newEvent );
        QCoreApplication::postEvent( m_CustomPlot, newEvent );
    }
}

