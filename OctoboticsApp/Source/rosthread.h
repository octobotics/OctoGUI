/*!
 *  \file      rosthread.h
 *  \brief     Communicates with ros master using publishers, subscribers and services.
 *  \details   This class is a ros node that communicates with ros master
 *  \authors   Charith Reddy
 *  \copyright Copyright (C) 2022 Octobotics Tech Pvt. Ltd. All Rights Reserved.
                Do not remove this copyright notice.
                Do not use, reuse, copy, merge, publish, sub-license, sell, distribute or modify this code - except without explicit,
                written permission from Octobotics Tech Pvt. Ltd.
                Contact connect@octobotics.tech for full license information.

 *  \todo      Remove Octo_qt msg types and embed them into any of the latest packages
 *  \warning   Improper use can crash the application
 */

#ifndef ROSTHREAD_H
#define ROSTHREAD_H
#include "octo_qt/motor_status.h"
#include "octo_qt/tool_status.h"
#include "serialtoros/graph_arr.h"
#include "serialtoros/thick_arr.h"
#include "serialtoros/VDE_arr.h"
#include "ros/ros.h"
#include "std_msgs/Float32.h"
#include "octo_qt/float_array.h"
#include "octo_qt/ang_lin_arr.h"
#include "stm_client/tool_status.h"
#include "std_msgs/Int8.h"
#include "std_msgs/Int16.h"
#include "std_msgs/Int64.h"
#include "stm_interface/RelayControl.h"
#include "serialtoros/GraphPath.h"
#include "my_actuator/vitals.h"
#include "std_msgs/String.h"
#include "std_srvs/Trigger.h"
#include <QString>
#include <QThread>
#include "customplotitem.h"
#include<bits/stdc++.h>
#include "launch_crawler/SerialNumbers.h"
#include "octo_arm_teleop/GUI_adra_stat.h"
#include "stm_client/cam_array.h"

/*!
 * \brief The RosThread class is a QThread to run a ros node
 */
class RosThread : public QThread
{
    Q_OBJECT


public slots:
    void addLine(QString newLine);

    //ros publishers
    void sendUtVel(QString value);
    void sendUtData(QString value);
    void capImgPub(int value);

    //ros subscribers
    void commCallback(const std_msgs::Int8::ConstPtr &msg);
    void armToolCallback(const std_msgs::Int8ConstPtr &msg);
    void velCallback(const std_msgs::Int16::ConstPtr &msg);
    void crawlerCallback(const my_actuator::vitals::ConstPtr &msg);
    void thicknessCallback(const serialtoros::thick_arr::ConstPtr &msg);
    void graphCallback(const serialtoros::graph_arr::ConstPtr &msg);
    void utCallback(const serialtoros::VDE_arr::ConstPtr &msg);
    void fCallback(const std_msgs::Float32::ConstPtr &msg);
    void currentCallback(const std_msgs::Float32::ConstPtr &msg);
    void uidCallback(const launch_crawler::SerialNumbers::ConstPtr &msg);

    //ros service servers
    bool toggleCallback(stm_client::tool_status::Request &req, stm_client::tool_status::Response &res);
    bool imgCallback(serialtoros::GraphPath::Request &req, serialtoros::GraphPath::Response &res );

    //ros service clients
    void sendToolData(QString value);
    void crawlerInitSrv(int value);
    void reset_crawler(int val);
    void armInitSrv(int value);
    void checkArmStatus();
    void reset_arm(int val);
    void saveImg(QString img);

public:
    void run();

signals:
    //signals
    void commCallback(int value);
    void armToolCallback(int value);
    void battCallback(float value);
    void tempCallback(QVector<int> temp);
    void errorCallback(QVector<int> err);
    void velCallback(int current_vel_linear);
    void crawlerCallback(bool m1, bool m2, bool m3, bool m4);
    void armCallback(QVector<int> arm_status);
    void utCallback(int vel, int deepcoat, int echo);
    void fCallback(float force);
    void uidCallback(QVector<QString> uid);
    void currentCallback(float current);

    void toggleCallback(bool flag);
    void trigImg(int k);
    void thicknessCallback(float thickness, float unit);

    void initArm(bool k);
    void stopArm(bool k );
    void rstArm(bool k);
    void initCrawler(bool k);
    void stopCrawler(bool k );
    void rstCrawler(bool k);

    void graphCall(QVector<double> data, QVector<double> tuple,int64_t x_range);

private:
    ros::NodeHandlePtr m_nodeHandler;

    ros::Publisher m_publisher;
    ros::Publisher vel_pub_;
    ros::Publisher ut_dc_pub_;
    ros::Publisher ut_xrange_pub_;
    ros::Publisher img_cap_pub_;

    ros::Subscriber comm_sub_;
    ros::Subscriber tool_sub_;
    ros::Subscriber vel_sub_;
    ros::Subscriber crawler_status_sub_;
    ros::Subscriber thick_sub_;
    ros::Subscriber graph_sub_;
    ros::Subscriber ut_sub_;
    ros::Subscriber f_sub_;
    ros::Subscriber current_sub_;
    ros::Subscriber uid_sub_;

    //ros Service Server
    ros::ServiceServer toggle_srv_;
    ros::ServiceServer send_img_srv_;

    // ros service client
    ros::ServiceClient send_tool_srv_;
    ros::ServiceClient switch_grinder_srv_;
    ros::ServiceClient crawler_init_srv_;
    ros::ServiceClient crawler_stop_srv_;
    ros::ServiceClient crawler_reset_srv_;
    ros::ServiceClient arm_init_srv_;
    ros::ServiceClient arm_stop_srv_;
    ros::ServiceClient arm_reset_srv_;
    ros::ServiceClient get_arm_status_srv_;

    //variables
    QVector<int> bot_err;
    QVector<int> act_temp;
    QVector<int> arm_status;
    QMap<int, QString> error_;
    QMap<int, QString> c_motors_;
    QVector<QString> uids_;

};
#endif // ROSTHREAD_H
