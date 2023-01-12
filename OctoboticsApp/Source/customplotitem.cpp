#include "customplotitem.h"
#include "qcustomplot.h"
#include <QDebug>
#include <math.h>
QVector<double> x_data(320), y_data(320); // initialize with entries 0..100


CustomPlotItem::CustomPlotItem( QQuickItem* parent ) : QQuickPaintedItem( parent )
    , m_CustomPlot( nullptr )
{
    setFlag( QQuickItem::ItemHasContents, true );
    setAcceptedMouseButtons( Qt::AllButtons );
    connect( this, &QQuickPaintedItem::widthChanged, this, &CustomPlotItem::updateCustomPlotSize );
    connect( this, &QQuickPaintedItem::heightChanged, this, &CustomPlotItem::updateCustomPlotSize );
    connect( m_CustomPlot, &QCustomPlot::afterReplot, this, &CustomPlotItem::onCustomReplot );
//    x_data->resize(320);
//    y_data->resize(320);


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
    //setupQuadraticDemo(m_CustomPlot);

    connect( m_CustomPlot, &QCustomPlot::afterReplot, this, &CustomPlotItem::onCustomReplot );
    m_CustomPlot->replot();
}


void CustomPlotItem::paint( QPainter* painter )
{
    if (m_CustomPlot)
    {
        QPixmap    picture( boundingRect().size().toSize() );
        QCPPainter qcpPainter( &picture );

        //m_CustomPlot->replot();
        m_CustomPlot->toPainter( &qcpPainter );

        painter->drawPixmap( QPoint(), picture );
    }
}


void CustomPlotItem::setupPlot(QCustomPlot* customPlot)
{

    customPlot->addGraph();
        for (int i=0; i<320; ++i)
        {
//            qDebug()<<"in setup for"<<i;

          x_data[i] = (double)(printRandoms(0,320));// x goes from -1 to 1
          y_data[i] = (double)(printRandoms(0,255));// // let's plot a quadratic function
        }

        customPlot->graph(0)->setData( y_data, x_data );
            customPlot->graph(0)->setPen(QPen(QColor(0, 211, 0)));

            customPlot->xAxis->setRange(0, 320);
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


//    // make left and bottom axes transfer their ranges to right and top axes:
//    connect(customPlot->xAxis, SIGNAL(rangeChanged(QCPRange)), customPlot->xAxis2, SLOT(setRange(QCPRange)));
//    connect(customPlot->yAxis, SIGNAL(rangeChanged(QCPRange)), customPlot->yAxis2, SLOT(setRange(QCPRange)));

    // setup a timer that repeatedly calls MainWindow::realtimeDataSlot:
    dataTimer = new QTimer(this);
    connect(dataTimer, SIGNAL(timeout()), this, SLOT(realtimeDataSlot()));
    dataTimer->start(2);
}
void CustomPlotItem::realtimeDataSlot()
{

      // add data to lines:
      m_CustomPlot->graph(0)->data()->clear();
      m_CustomPlot->graph(0)->addData(y_data,x_data);


    m_CustomPlot->replot();
}

void CustomPlotItem::saveImg()
{
    m_CustomPlot->savePng("SCREENSHOT/g1.png");
    qDebug()<<"image saved";

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


    void CustomPlotItem::setupQuadraticDemo( QCustomPlot* customPlot )
    {
        // make top right axes clones of bottom left axes:

        // generate some data:
        QVector<double> x( 101 ), y( 101 );   // initialize with entries 0..100
        QVector<double> lx( 101 ), ly( 101 ); // initialize with entries 0..100
        for (int i = 0; i < 101; ++i)
        {
            x[i] = i / 50.0 - 1;              // x goes from -1 to 1
            y[i] = x[i] * x[i];               // let's plot a quadratic function

            lx[i] = i / 50.0 - 1;             //
            ly[i] = lx[i];                    // linear
        }
        // create graph and assign data to it:
        customPlot->addGraph();
        customPlot->graph( 0 )->setPen( QPen( Qt::red ) );
        customPlot->graph( 0 )->setPen( QPen( Qt::blue, 2 ) );
        customPlot->graph( 0 )->setData( x, y );

        customPlot->addGraph();
        customPlot->graph( 1 )->setPen( QPen( Qt::magenta ) );
        customPlot->graph( 1 )->setPen( QPen( Qt::blue, 2 ) );
        customPlot->graph( 1 )->setData( lx, ly );

        // give the axes some labels:
        customPlot->xAxis->setLabel( "x" );
        customPlot->yAxis->setLabel( "y" );
        // set axes ranges, so we see all data:
        customPlot->xAxis->setRange( -1, 1 );
        customPlot->yAxis->setRange( -1, 1 );

        customPlot ->setInteractions( QCP::iRangeDrag | QCP::iRangeZoom | QCP::iSelectPlottables );
        connect( customPlot, SIGNAL(plottableClick(QCPAbstractPlottable*, QMouseEvent*)), this, SLOT(graphClicked( QCPAbstractPlottable*)));


   }

int CustomPlotItem::printRandoms(int lower,int upper)
{
return (rand()%(upper-lower+1))+lower;
}


void CustomPlotItem::graphCall(QVector<double> v)
{
    QVector<double> y(320); // initialize with entries 0..100
    for (int i=0; i<320; ++i)
    {
      y[i] = i;// // let's plot a quadratic function
    }
    x_data = v;
    y_data = y;
//    m_CustomPlot->graph(0)->data()->clear();
//    m_CustomPlot->graph(0)->setData(v,y);
//    m_CustomPlot->replot();
//    m_CustomPlot->update() ;
//    setupQuadraticDemo(v,y);
//qDebug()<<"HI CUSTOM"<<" ";

}


void CustomPlotItem::mousePressEvent( QMouseEvent* event )
{
    qDebug() << Q_FUNC_INFO;
    routeMouseEvents( event );
}

void CustomPlotItem::mouseReleaseEvent( QMouseEvent* event )
{
    qDebug() << Q_FUNC_INFO;
    routeMouseEvents( event );
}

void CustomPlotItem::mouseMoveEvent( QMouseEvent* event )
{
    routeMouseEvents( event );
}

void CustomPlotItem::mouseDoubleClickEvent( QMouseEvent* event )
{
    qDebug() << Q_FUNC_INFO;
    routeMouseEvents( event );
}

void CustomPlotItem::graphClicked( QCPAbstractPlottable* plottable )
{
    qDebug() << Q_FUNC_INFO << QString( "Clicked on graph '%1 " ).arg( plottable->name() );
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

