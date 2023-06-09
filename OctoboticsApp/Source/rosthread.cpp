/*!
 *  \file      rosthread.cpp
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
#pragma once
#include "rosthread.h"
#include <QDebug>
#include <bits/stdc++.h>

QString GraphPath_ = "";

/*!
 * \brief a QThread initializing ROS publishers, subscribers and services
 */
void RosThread::run()
{

    qDebug() << "RosThread run called";

    //ros node handler
    m_nodeHandler.reset(new ros::NodeHandle("~"));


    //graph object
    CustomPlotItem *m_cst = new CustomPlotItem();
    //graph signal to send data received from ros topic to customplotitem
    connect(this, SIGNAL(graphCall(QVector<double>, QVector<double>, int64_t)), m_cst, SLOT(graphCall(QVector<double>,QVector<double>,int64_t)));
    //graph signal to trigger graph image capture from ros service call
    connect(this, SIGNAL(trigImg(int)), m_cst, SLOT(trigImg(int)));

    // ros publishers
    m_publisher = m_nodeHandler->advertise<std_msgs::String>("/awesome_topic", 1000);
    vel_pub_ = m_nodeHandler->advertise<std_msgs::Int64>("/send_ut_velocity", 1);
    ut_dc_pub_ = m_nodeHandler->advertise<std_msgs::Int8>("/send_ut_deepcoat", 1);
    ut_xrange_pub_ = m_nodeHandler->advertise<std_msgs::Int16 >("/send_ut_xrange", 1);
    img_cap_pub_ = m_nodeHandler->advertise<std_msgs::Int8>("/img_cap", 1);

    // ros subscribers
    comm_sub_ = m_nodeHandler->subscribe<std_msgs::Int8>("/comm_status", 1, &RosThread::commCallback, this);
    tool_sub_ = m_nodeHandler->subscribe<std_msgs::Int8>("/arm_tool_status", 1, &RosThread::armToolCallback, this);
    vel_sub_ = m_nodeHandler->subscribe<octo_qt::ang_lin_arr>("/vel_status", 1, &RosThread::velCallback, this);
    crawler_status_sub_ = m_nodeHandler->subscribe<my_actuator::vitals>("/crawler_vitals",1, &RosThread::crawlerCallback, this);
    thick_sub_ = m_nodeHandler->subscribe<serialtoros::thick_arr>("/ut_thickness", 1, &RosThread::thicknessCallback, this);
    graph_sub_ = m_nodeHandler->subscribe<serialtoros::graph_arr>("/ut_graph", 1, &RosThread::graphCallback, this);
    ut_sub_ = m_nodeHandler->subscribe<serialtoros::VDE_arr>("/ut_VDE_values", 1, &RosThread::utCallback, this);
    f_sub_ = m_nodeHandler->subscribe<std_msgs::Float32>("/force_status", 1, &RosThread::fCallback, this);
    current_sub_ = m_nodeHandler->subscribe<std_msgs::Float32>("/current_status", 1, &RosThread::currentCallback, this);
    uid_sub_ = m_nodeHandler->subscribe<launch_crawler::SerialNumbers>("/serial_numbers",1,&RosThread::uidCallback, this);

    // ros service servers
    toggle_srv_ = m_nodeHandler->advertiseService("toggle_robot", &RosThread::toggleCallback, this);
    send_img_srv_ = m_nodeHandler->advertiseService("img_send", &RosThread::imgCallback, this);

    //ros service clients
    send_tool_srv_ =  m_nodeHandler->serviceClient<stm_client::relay_control>("/relay_toggle_channel");
    switch_grinder_srv_ =  m_nodeHandler->serviceClient<std_srvs::Trigger>("/servo_trigger_channel");
    crawler_init_srv_ = m_nodeHandler->serviceClient<std_srvs::Trigger>("/crawler_control_node/init_teleop");
    crawler_stop_srv_ = m_nodeHandler->serviceClient<std_srvs::Trigger>("/crawler_control_node/stop_teleop");
    crawler_reset_srv_ = m_nodeHandler->serviceClient<std_srvs::Trigger>("/crawler_control_node/stop_motors");
    arm_init_srv_ = m_nodeHandler->serviceClient<std_srvs::Trigger>("/octo_arm_teleop/init_teleop");
    arm_stop_srv_ = m_nodeHandler->serviceClient<std_srvs::Trigger>("/octo_arm_teleop/stop_teleop");
    arm_reset_srv_ = m_nodeHandler->serviceClient<std_srvs::Trigger>("/octo_arm_teleop/reset_motors");
    get_arm_status_srv_ = m_nodeHandler->serviceClient<octo_arm_teleop::GUI_adra_stat>("/gui_adra_status_srv");

    //ros spin
    ros::spin();

}

/*!
 * \brief RosThread::addLine Test function to validate ros communcation with QT
 * \param newLine
 */
void RosThread::addLine(QString newLine)
{
    ros::Rate rate(10);
    std_msgs::String msg;
    msg.data = newLine.toUtf8().constData();
    m_publisher.publish(msg);
}


/*!
 * \brief RosThread::sendUtVel Publishes UT Velocity from UI to serialtoros node
 * \param value gets value from user input in UI
 */
void RosThread::sendUtVel(QString value)
{
    ros::Rate rate(10);
    std_msgs::Int64 msg;
    msg.data = value.toInt();
    vel_pub_.publish(msg);
}


/*!
 * \brief RosThread::sendUtData Publishes Deepcoat and Xrange values to serialtoros node
 * \param value 0: sends 0 to deepcoat 1: sends 1 to deepcoat 128: sends 128 to xrange( to start receiving graph data from UT node)
 */
void RosThread::sendUtData(QString value)
{
    ros::Rate rate(10);
    std_msgs::Float32 xrange;
    std_msgs::Int8 dc;
    if(value == "0")
    {
        dc.data = value.toInt();
        ut_dc_pub_.publish(dc);

    }
    else if(value == "1")
    {
        dc.data = value.toInt();
        ut_dc_pub_.publish(dc);

    }
    else if(value == "128")
    {
        xrange.data = value.toInt();
        ut_xrange_pub_.publish(xrange);
    }
}


/*!
 * \brief RosThread::capImgPub publisher to trigger local image capture from cameras in xavier
 * \param value
 */
void RosThread::capImgPub(int value)
{
    std_msgs::Int8 k;
    k.data= value;
    img_cap_pub_.publish(k);

}


/*!
 * \brief RosThread::commCallback Subscriber Callback for communication status
 * \param msg gets 0 if connection lost and 1 if established
 */
void RosThread::commCallback(const std_msgs::Int8::ConstPtr &msg)
{
    auto int_msg = msg->data;

    emit commCallback(int_msg);
}

/*!
 * \brief RosThread::armToolCallback displays if tools on arm are toggled or not in the UI
 * \param msg
 */
void RosThread::armToolCallback(const std_msgs::Int8::ConstPtr &msg)
{
    auto int_msg = msg->data;
    emit armToolCallback(int_msg);
}


/*!
 * \brief RosThread::velCallback Receives current and max velocities from crawler node and displays on circular gauge
 * \param msg
 */
void RosThread::velCallback(const octo_qt::ang_lin_arr::ConstPtr &msg)
{
    auto current_vel_linear = msg->data[0];
    auto current_vel_angular = msg->data[1];
    auto max_linear = msg->data[2];
    auto max_angular = msg->data[3];
    emit velCallback(current_vel_linear, current_vel_angular, max_linear, max_angular);
}



/*!
 * \brief RosThread::crawlerCallback gets vitals like voltage, error msgs and current motor temperature from crawler node
 * \param msg
 */
void RosThread::crawlerCallback(const my_actuator::vitals::ConstPtr &msg)
{
    float voltage = msg->voltage;
    qDebug()<<"volt"<<voltage;
    bot_err.resize(4);
    act_temp.resize(4);
    for(int i =0; i<4; i++)
    {
        bot_err[i] = msg->error[i];

        act_temp[i] = msg->temp[i];

    }

    emit crawlerCallback( (bool)msg->mode[0], (bool)msg->mode[1], (bool)msg->mode[2], (bool)msg->mode[3]);
    emit battCallback(voltage);
    emit tempCallback(act_temp);
    emit errorCallback(bot_err);
}


/*!
 * \brief RosThread::thicknessCallback gets thickness from ut serial node and displays on UI
 * \param msg
 */
void RosThread::thicknessCallback(const serialtoros::thick_arr::ConstPtr &msg)
{
    float thickness_ = msg->data[0];
    thickness_  = round(thickness_ * 100) / 100;

    auto unit_ = msg->data[1];
    emit thicknessCallback(thickness_, unit_);
}

/*!
 * \brief RosThread::graphCallback gets graph values from UT serial node
 * \param msg
 */
void RosThread::graphCallback(const serialtoros::graph_arr::ConstPtr &msg)
{
    auto data_ = msg->data;
    auto tuple_ = msg->echo_arr;
    int64_t x_range_= msg->x_range;

    size_t n = sizeof(data_)/sizeof(data_[0]);
    QVector<double> v(320), tuple(3);// initialize with entries 0..320


    tuple[0] = tuple_[0];
    tuple[1] = tuple_[1];
    tuple[2] = tuple_[2];

    // loop through the array elements
    for (size_t i = 0; i < n; i++) {
        v[i] = data_[i];
    }
    emit  graphCall(v, tuple,x_range_);
}

/*!
 * \brief RosThread::utCallback gets current velocity, deepcoat and echo values from UT serial node and displays in the UI
 * \param msg
 */
void RosThread::utCallback(const serialtoros::VDE_arr::ConstPtr &msg)
{
    auto vel = msg->data[0];
    auto deepcoat = msg->data[2];
    auto echo = msg->data[1];
    emit utCallback(vel, deepcoat, echo);
}


/*!
 * \brief RosThread::fCallback gets force value from sensor
 * \param msg
 */
void RosThread::fCallback(const std_msgs::Float32::ConstPtr &msg)
{
    auto force = msg->data;
    emit fCallback(force);
}

/*!
 * \brief RosThread::currentCallback gets current value from stm32 and displays on UI
 * \param msg
 */
void RosThread::currentCallback(const std_msgs::Float32::ConstPtr &msg)
{
    auto current = msg->data;
    emit currentCallback(current);
}


/*!
 * \brief RosThread::uidCallback gets serial numbers of cralwer from xavier
 * \param msg
 */

void RosThread::uidCallback(const launch_crawler::SerialNumbers::ConstPtr &msg)
{
    uids_.clear(); // Clear the vector before assigning new values
    for (const auto& serialNumber : msg->serial_numbers) {
        uids_.push_back(QString::fromStdString(serialNumber));
    }
    emit uidCallback(uids_);

}


/*!
 * \brief RosThread::toggleCallback ros service server that gets the toggle input from route joy node that shows if joy is in arm mode or crawler mode
 * \param req
 * \param res
 * \return
 */
bool RosThread::toggleCallback(stm_client::tool_status::Request &req, stm_client::tool_status::Response &res)
{
    bool toogle_status = req.flag;
    // QString s = QString::number(int_msg);
    // qDebug() << Q_FUNC_INFO << toogle_status;
    emit toggleCallback(toogle_status);
    res.response = true;
    return true;
}

/*!
 * \brief RosThread::imgCallback ros service server callback to send graph image path to (gets a call from unity service client)
 * \param req
 * \param res
 * \return
 */
bool RosThread::imgCallback(serialtoros::GraphPath::Request &req, serialtoros::GraphPath::Response &res )
{

    qDebug()<< "imgcallback" << req.req;
    if (req.req ==1 )
    {   int i = 1;
        emit trigImg(1);
        qDebug()<<GraphPath_;
        ros::Duration(0.2).sleep();

        res.path = GraphPath_.toStdString();
        GraphPath_ = "";
    }
    return true;
}


/*!
 * \brief RosThread::sendToolData toggles relay and grinder depending on the button clicks in UI
 * \param value 0: grinder all others: relay control
 */
void RosThread::sendToolData(QString value)
{
    if(value == "0")
    {
        std_srvs::Trigger k;
        switch_grinder_srv_.call(k);

    }
    else{
        stm_client::relay_control val;
        val.request.data = value.toInt();
//        qDebug()<<"relay_value:"<<value;
        send_tool_srv_.call(val);

    }

}



/*!
 * \brief RosThread::crawlerInitSrv  calls the service to initialialize and stop the crawler
 * \param value 1: init 0: stop
 */
void RosThread::crawlerInitSrv(int value)
{
    int k = value;
    std_srvs::Trigger b;
    if(k){

        crawler_init_srv_.call(b);
        if (b.response.success){
//            qDebug() << "initialized crawler";
            emit initCrawler(1);

        }
        else {
//            qDebug() << "error initializing crawler";
            emit initCrawler(0);

        }
    }
    else{

        qDebug() << "stop crawler";
        crawler_stop_srv_.call(b);
        if (b.response.success){
            qDebug() << "stopped crawler";
            emit stopCrawler(1);


        }
        else {
            qDebug() << "error stopping crawler";
            emit stopCrawler(0);

        }
    }
}


/*!
 * \brief RosThread::reset_crawler calls a service to reset crawler
 * \param val trigger value
 */
void RosThread::reset_crawler(int val)
{
    int k = val;
    std_srvs::Trigger b;
    if(k){

        qDebug() << "reset crawler";
        crawler_reset_srv_.call(b);
        if (b.response.success){
            qDebug() << "reset crawler done";
            emit rstCrawler(1);

        }
        else {
            qDebug() << "error resetting crawler";
            emit rstCrawler(0);


        }
    }
}



/*!
 * \brief RosThread::armInitSrv calls the service to initialialize and stop the arm
 * \param value 0: stop arm  1: init arm
 */
void RosThread::armInitSrv(int value)
{
    int k = value;
    std_srvs::Trigger b;
    if(k){

        qDebug() << "init arm";
        arm_init_srv_.call(b);
        if (b.response.success){
            qDebug() << "initialized arm";
            emit initArm(1);

        }
        else {
            qDebug() << "error initializing arm";
            emit initArm(0);

        }
    }
    else{

        qDebug() << "stop arm";
        arm_stop_srv_.call(b);
        if (b.response.success){
            qDebug() << "stopped arm";
            emit stopArm(1);


        }
        else {
            qDebug() << "error stopping arm";
            emit stopArm(0);

        }
    }

}







/*!
 * \brief RosThread::reset_arm
 * \param val
 */
void RosThread::reset_arm(int val)
{
    int k = val;
    std_srvs::Trigger b;
    if(k){

//        qDebug() << "reset arm";
        arm_reset_srv_.call(b);
        if (b.response.success){
//            qDebug() << "reset arm done";
            emit rstArm(1);

        }
        else {
//            qDebug() << "error resetting arm";
            emit rstArm(0);

        }
    }

}


/*!
 * \brief RosThread::checkArmStatus calls a service to get current status of arm (error code and temperature)
 */
void RosThread::checkArmStatus()
{

    octo_arm_teleop::GUI_adra_stat msg;
    get_arm_status_srv_.call(msg);
    arm_status.resize(8);
    for(int i =0; i<4; i++)
    {
        arm_status[i] = msg.response.error_motors[i];
        arm_status[i+4] = msg.response.temp_motors[i];
    }
//    qDebug()<<QString::number(msg.response.error_motors[1]);

    emit armCallback(arm_status);

}


/*!
 * \brief RosThread::saveImg gets graphimage path from customplotitem and stores it in a global variable
 * \param img
 */
void RosThread::saveImg(QString img)
{

    GraphPath_ = img;
    qDebug() << img;

}


