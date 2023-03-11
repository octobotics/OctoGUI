#pragma once
#include <bits/stdc++.h>

#include <QtQuick>
#include "qcustomplot.h"
#include "rosthread.h"
#include <iostream>
#include <ctime>
class QCustomPlot;

class CustomPlotItem : public QQuickPaintedItem
{
    Q_OBJECT

public:
    CustomPlotItem( QQuickItem* parent = 0 );
    virtual ~CustomPlotItem();
    void paint( QPainter* painter );
    void saveImgFun(int m);
    void setupPlot(QCustomPlot* customPlot );

    Q_INVOKABLE void initCustomPlot();
protected:
    void routeMouseEvents( QMouseEvent* event );
    void setupQuadraticDemo( QCustomPlot* customPlot );

    virtual void mousePressEvent( QMouseEvent* event );
    virtual void mouseReleaseEvent( QMouseEvent* event );
    virtual void mouseMoveEvent( QMouseEvent* event );
    virtual void mouseDoubleClickEvent( QMouseEvent* event );

private:
    QCustomPlot  *m_CustomPlot;
    QTimer*                 dataTimer;
    QTimer*                 graphTimer;

    QImage graph_img_;

public slots:
    void trigImg(int k);
    void saveImgk(int m);
    void graph_rpt();
    void onCustomReplot();
    void realtimeDataSlot();
    void updateCustomPlotSize();

    int printRandoms(int lower, int upper);
    void graphClicked(QCPAbstractPlottable* plottable);
    void graphCall(QVector<double> v, QVector<double> graph_arr, int64_t x_range);

signals:
    void saveImg(QString myImage);

};
