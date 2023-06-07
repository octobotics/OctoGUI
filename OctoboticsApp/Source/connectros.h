/*!
 *  \file      connectros.h
 *  \brief     Connect ros class.
 *  \details   This class is used to connect the UI to the ros master.
 *  \author    Venkat
 *  \copyright Copyright (C) 2022 Octobotics Tech Pvt. Ltd. All Rights Reserved.
                Do not remove this copyright notice.
                Do not use, reuse, copy, merge, publish, sub-license, sell, distribute or modify this code - except without explicit,
                written permission from Octobotics Tech Pvt. Ltd.
                Contact connect@octobotics.tech for full license information.

 *  \todo      None
 *  \warning   Improper use can crash the application
 */


#pragma once
#ifndef CONNECTROS_H
#define CONNECTROS_H
#include "QDebug"
#include <ros/ros.h>
#include <QObject>
#include <QDir>

/*!
 * \brief The ConnectROS class takes hostname and URI from UI and connects to the ros master
 */
class ConnectROS : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString masterURI READ getMasterURI WRITE setMasterURI NOTIFY masterURIChanged)
    Q_PROPERTY(QString host READ getHost WRITE setHost NOTIFY hostChanged)
public:
    explicit ConnectROS(QObject *parent = nullptr);

signals:
    void masterURIChanged(const QString &arg);
    void hostChanged(const QString &arg);
    void retry();
    void connectSuccess();
public slots:
    QString getMasterURI();
    void setMasterURI(const QString &arg);
    QString getHost();
    void setHost(const QString &arg);
    void connectMasterURI(QString master, QString hostname);
private:
    QString m_masterURI;
    QString m_host;
};
#endif
