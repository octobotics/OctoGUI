#pragma once

#include <QtQuick>
#include "qcustomplot.h"

class QCustomPlot;

class CustomPlotItem : public QQuickPaintedItem
{
    Q_OBJECT

public:
    CustomPlotItem( QQuickItem* parent = 0 );
    virtual ~CustomPlotItem();
//    void initRt();

    void paint( QPainter* painter );

    Q_INVOKABLE void initCustomPlot();
    void setupPlot(QCustomPlot* customPlot );
protected:
    void routeMouseEvents( QMouseEvent* event );

//    void setupQuadraticDemo( QVector<double> x ,QVector<double> y);
//    void setupQuadraticDemo();
    void setupQuadraticDemo( QCustomPlot* customPlot );

    virtual void mousePressEvent( QMouseEvent* event );
    virtual void mouseReleaseEvent( QMouseEvent* event );
    virtual void mouseMoveEvent( QMouseEvent* event );
    virtual void mouseDoubleClickEvent( QMouseEvent* event );


//    RosThread *rt;

//public slots:
//    void graphCallback(QVector<int> v);
private:
    QCustomPlot  *m_CustomPlot;
    QTimer*                 dataTimer;
//        QVector<double>* x_data; // initialize with entries 0..100
//        QVector<double>*  y_data; // initialize with entries 0..100



public slots:
        void graphCall(QVector<double> v);
        void onCustomReplot();
        void updateCustomPlotSize();
        int printRandoms(int lower, int upper);
        void graphClicked(QCPAbstractPlottable* plottable);
        void realtimeDataSlot();
        void saveImg();


};
