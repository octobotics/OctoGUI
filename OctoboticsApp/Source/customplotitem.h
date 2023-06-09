/*!
 *  \file      customplotitem.h
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


#pragma once
#ifndef CUSTOMPLOTITEM_H
#define CUSTOMPLOTITEM_H
#include <bits/stdc++.h>
#include <QtQuick>
#include "qcustomplot.h"
#include "rosthread.h"
#include <iostream>
#include <ctime>
class QCustomPlot;

/*!
 * \brief The CustomPlotItem class starts and updates the UT graph in real time
 */
class CustomPlotItem : public QQuickPaintedItem
{
    Q_OBJECT

public:
    CustomPlotItem( QQuickItem* parent = 0 );

    virtual ~CustomPlotItem();

    Q_INVOKABLE void initCustomPlot();
    void paint( QPainter* painter );
    void setupPlot(QCustomPlot* customPlot );
    void saveImgFun(int m);

private:
    QCustomPlot  *m_CustomPlot;
    QTimer* dataTimer;
    QTimer* graphTimer;
    QImage graph_img_;

public slots:
    int printRandoms(int lower, int upper);
    void graph_rpt();
    void updateCustomPlotSize();
    void onCustomReplot();
    void realtimeDataSlot();
    void trigImg(int k);
    void saveImgk(int m);

    void graphCall(QVector<double> v, QVector<double> graph_arr, int64_t x_range);

signals:
    void saveImg(QString myImage);

};
#endif
