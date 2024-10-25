/*!
 *  \file      connectros.cpp
 *  \brief     Connect ros class.
 *  \details   This class is used to connect the UI to the ros master. You can edit the default rosmaster and hostname here
 *  \author    Venkat, Charith Reddy
 *  \copyright Copyright (C) 2022 Octobotics Tech Pvt. Ltd. All Rights Reserved.
                Do not remove this copyright notice.
                Do not use, reuse, copy, merge, publish, sub-license, sell, distribute or modify this code - except without explicit,
                written permission from Octobotics Tech Pvt. Ltd.
                Contact connect@octobotics.tech for full license information.

 *  \todo      None
 *  \warning   Improper use can crash the application
 */



#include "connectros.h"

/*!
 * \brief ConnectROS::ConnectROS: constructor: set hostname and URI according the machine and robot that is being used
 * \param m_masterURI: ROS Master URI of the robot
 * \param m_host: ROS Hostname of the ground station machine being used
 */
ConnectROS::ConnectROS(QObject *parent)
    : QObject(parent)
{
//    m_masterURI = "http://octo:11311";
    m_masterURI = "http://10.223.240.1:11311";
    m_host = "octo";
}
QString ConnectROS::getMasterURI()
{
    return m_masterURI;
}
void ConnectROS::setMasterURI(const QString &arg)
{
    m_masterURI = arg;
    emit masterURIChanged(arg);
}
QString ConnectROS::getHost()
{
    return m_host;
}
void ConnectROS::setHost(const QString &arg)
{
    m_host = arg;
    emit hostChanged(arg);
}
void ConnectROS::connectMasterURI(QString master, QString hostname)
{
    std::map<std::string, std::string> remappings;
    remappings["__master"] = master.toStdString();
    remappings["__hostname"] = hostname.toStdString();
    std::cout << "master started!"
              << "master :: " << master.toStdString() << " host :: " << hostname.toStdString() << std::endl;
    ros::init(remappings, "octo_gui");

//    ros::AsyncSpinner spinner(0);
//    spinner.start();

    // creates a folder called Screenshot to save images from the UI
    if (ros::master::check())
    {
        ros::start();
        std::cout << "master started!" << std::endl;
        QDir dirScanSpectra;
        if (!dirScanSpectra.exists("SCREENSHOT"))
        {
            dirScanSpectra.mkdir("SCREENSHOT");
        }
        emit connectSuccess();
    }
    else
    {
        ros::shutdown();
        std::cout << "master not started!" << std::endl;
        emit retry();
    }
}
