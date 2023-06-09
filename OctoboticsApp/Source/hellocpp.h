/*!
 *  \file      hellocpp.h
 *  \brief     record camera class.
 *  \details   This class is used to record rtsp pipelines from the cameras.
 *  \author    Charith Reddy
 *  \copyright Copyright (C) 2022 Octobotics Tech Pvt. Ltd. All Rights Reserved.
                Do not remove this copyright notice.
                Do not use, reuse, copy, merge, publish, sub-license, sell, distribute or modify this code - except without explicit,
                written permission from Octobotics Tech Pvt. Ltd.
                Contact connect@octobotics.tech for full license information.

 *  \todo      remove duplicating the code and condense into a single pipeline
 *  \warning   Improper use can crash the application
 */

#ifndef HELLOCPP_H
#define HELLOCPP_H

#include <QObject>

/*!
 * \brief The HelloCpp class is used to record the rtsp pipeline from cameras
 */
class HelloCpp : public QObject
{
    Q_OBJECT

public:

    explicit HelloCpp(QObject *parent = 0);
    Q_INVOKABLE void gstRecord();
    Q_INVOKABLE void gstStop();
    Q_INVOKABLE void gstRecord2();
    Q_INVOKABLE void gstStop2();
signals:

public slots:

};

#endif
