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
//    CustomPlotItem *m_cst = new CustomPlotItem();
    //graph signal to send data received from ros topic to customplotitem
//    connect(this, SIGNAL(graphCall(QVector<double>, QVector<double>, int64_t)), m_cst, SLOT(graphCall(QVector<double>,QVector<double>,int64_t)));
//    //graph signal to trigger graph image capture from ros service call
//    connect(this, SIGNAL(trigImg(int)), m_cst, SLOT(trigImg(int)));

    // ros publishers
    m_publisher = m_nodeHandler->advertise<std_msgs::String>("/awesome_topic", 1000);
    vel_pub_ = m_nodeHandler->advertise<std_msgs::Int64>("/send_ut_velocity", 1);
    automode_pub_ = m_nodeHandler->advertise<std_msgs::Int32>("/navigation_control",1);


    // ros subscribers
    water_level_ = m_nodeHandler->subscribe<std_msgs::Float32>("/cumulative_volume",1,&RosThread::waterCallback,this);
    comm_sub_ = m_nodeHandler->subscribe<std_msgs::Int16>("/comm_status", 1, &RosThread::commCallback, this);
    tool_sub_ = m_nodeHandler->subscribe<std_msgs::Int8>("/arm_tool_status", 1, &RosThread::armToolCallback, this);
    vel_sub_ = m_nodeHandler->subscribe<std_msgs::Int16>("/motor_speed", 1, &RosThread::velCallback, this);
    odometer_ = m_nodeHandler->subscribe<std_msgs::Int32>("/odometer",1,&RosThread::odomCallback,this);
    tripmeter_ = m_nodeHandler->subscribe<std_msgs::Int32>("/tripmeter",1, &RosThread::tripCallback,this);
    crawler_status_sub_ = m_nodeHandler->subscribe<my_actuator::vitals>("/crawler_vitals",1, &RosThread::crawlerCallback, this);
    velstatus_ = m_nodeHandler->subscribe<octo_qt::ang_lin_arr>("/vel_status",1,&RosThread::velstatusCallback,this);


    current_sub_ = m_nodeHandler->subscribe<std_msgs::Float32>("/wire_value", 1, &RosThread::currentCallback, this);
    uid_sub_ = m_nodeHandler->subscribe<launch_crawler::SerialNumbers>("/serial_numbers",1,&RosThread::uidCallback, this);
    lac_pos_  = m_nodeHandler->subscribe<std_msgs::Int32>("/current_servo_pose",1,&RosThread::lacCallback,this);
    voltage_ = m_nodeHandler->subscribe<std_msgs::Int16>("/voltage",1, &RosThread::batteryCallback,this);
    angle_measure_ = m_nodeHandler->subscribe<geometry_msgs::Vector3>("/imu/angles",1,&RosThread::angleCallback, this);


    // ros service servers
    toggle_srv_ = m_nodeHandler->advertiseService("toggle_robot", &RosThread::toggleCallback, this);

    //ros service clients
    send_tool_srv_ =  m_nodeHandler->serviceClient<stm_interface::RelayControl>("/relay_toggle_channel");
    switch_grinder_srv_ =  m_nodeHandler->serviceClient<std_srvs::Trigger>("/servo_trigger_channel");
    crawler_init_srv_ = m_nodeHandler->serviceClient<std_srvs::Trigger>("/crawler_control_node/init_teleop");
    crawler_stop_srv_ = m_nodeHandler->serviceClient<std_srvs::Trigger>("/crawler_control_node/stop_teleop");
    crawler_reset_srv_ = m_nodeHandler->serviceClient<std_srvs::Trigger>("/crawler_control_node/reset_motors");
    reset_waterlevel_ = m_nodeHandler->serviceClient<std_srvs::Trigger>("/reset_cumulative_volume");
    hzl_slide_cw_ = m_nodeHandler->serviceClient<std_srvs::Trigger>("/clockwise");
    hzl_slide_ccw_ = m_nodeHandler->serviceClient<std_srvs::Trigger>("/anticlockwise");
    crawler_speed_Increase_ = m_nodeHandler->serviceClient<std_srvs::Trigger>("/set_linear_velocity");
    crawler_speed_Decrease_ = m_nodeHandler->serviceClient<std_srvs::Trigger>("/decrease_linear_velocity");
    joystickonoff_ = m_nodeHandler->serviceClient<std_srvs::SetBool>("/set_joy");
    camera_init_   = m_nodeHandler->serviceClient<zed_interfaces::start_remote_stream>("/zed2i/zed_node/start_remote_stream");
    camera_stop_   = m_nodeHandler->serviceClient<zed_interfaces::stop_remote_stream>("/zed2i/zed_node/stop_remote_stream");

    lac_cw_ = m_nodeHandler->serviceClient<std_srvs::Trigger>("/add_three_service");
    lac_ccw_ = m_nodeHandler->serviceClient<std_srvs::Trigger>("/reduce_three_service");
    trip_reset_ = m_nodeHandler->serviceClient<std_srvs::Trigger>("/crawler_control_node/reset_tripmeter");
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

void RosThread::automodePub(int value)
{
    std_msgs::Int32 k;
    k.data = value;
    automode_pub_.publish(k);
}

/*!
 * \brief RosThread::sendUtVel Publishes UT Velocity from UI to serialtoros node
 * \param value gets value from user input in UI
 */



/*!
 * \brief RosThread::sendUtData Publishes Deepcoat and Xrange values to serialtoros node
 * \param value 0: sends 0 to deepcoat 1: sends 1 to deepcoat 128: sends 128 to xrange( to start receiving graph data from UT node)
 */



/*!
 * \brief RosThread::capImgPub publisher to trigger local image capture from cameras in xavier
 * \param value
 */


//void RosThread::voltageCallback(const std_msgs::Int16::ConstPtr &msg)
//{
//    auto value = msg->data ;

//    emit voltageCallback(value);

//}


/*!
 * \brief RosThread::commCallback Subscriber Callback for communication status
 * \param msg gets 0 if connection lost and 1 if established
 */
void RosThread::commCallback(const std_msgs::Int16::ConstPtr &msg)
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
void RosThread::velCallback(const std_msgs::Int16::ConstPtr &msg)
{
    auto current_vel_linear = msg->data;

    emit velCallback(current_vel_linear);
}

void RosThread::waterCallback(const std_msgs::Float32::ConstPtr &msg)
{
    auto level = msg->data;

    level = level/10000 ;

    emit waterCallback(level);
}

void RosThread::odomCallback(const std_msgs::Int32::ConstPtr &msg)
{
    auto current_odom = msg->data;
    current_odom = current_odom/1000 ;
//    qDebug()<<"Current_odom"<<current_odom;
    emit odomCallback(current_odom);
}
void RosThread::tripCallback(const std_msgs::Int32::ConstPtr &msg)
{
    auto current_trip = msg->data ;
    current_trip = current_trip/1000 ;
//    qDebug()<<"Current_trip"<<current_trip;
    emit tripCallback(current_trip);
}

void RosThread::lacCallback(const std_msgs::Int32::ConstPtr &msg)
{
    int lac_value = msg->data;
    emit lacCallback(lac_value);

}

void RosThread::batteryCallback(const std_msgs::Int16::ConstPtr &msg)
{
    float voltage = msg->data;

    emit battCallback(voltage);
}

void RosThread::angleCallback(const geometry_msgs::Vector3::ConstPtr &msg)
{
    int angle = msg->y;
    emit angleCallback(angle);
}



/*!
 * \brief RosThread::crawlerCallback gets vitals like voltage, error msgs and current motor temperature from crawler node
 * \param msg
 */
void RosThread::crawlerCallback(const my_actuator::vitals::ConstPtr &msg)
{
//    float voltage = msg->voltage;

//    qDebug()<<"volt"<<voltage;
    bot_err.resize(4);
    act_temp.resize(4);
    for(int i =0; i<4; i++)
    {
        bot_err[i] = msg->error[i];

        act_temp[i] = msg->temp[i];

    }

    emit crawlerCallback( (bool)msg->mode[0], (bool)msg->mode[1], (bool)msg->mode[2], (bool)msg->mode[3]);
//    emit battCallback(voltage);
    emit tempCallback(act_temp);
    emit errorCallback(bot_err);
}


/*!
 * \brief RosThread::thicknessCallback gets thickness from ut serial node and displays on UI
 * \param msg
 */


/*!
 * \brief RosThread::graphCallback gets graph values from UT serial node
 * \param msg
 */


/*!
 * \brief RosThread::utCallback gets current velocity, deepcoat and echo values from UT serial node and displays in the UI
 * \param msg
 */



/*!
 * \brief RosThread::fCallback gets force value from sensor
 * \param msg
 */


/*!
 * \brief RosThread::currentCallback gets current value from stm32 and displays on UI
 * \param msg
 */
void RosThread::currentCallback(const std_msgs::Float32::ConstPtr &msg)
{
    auto current = msg->data * 2083.33;

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

void RosThread::velstatusCallback(const octo_qt::ang_lin_arr::ConstPtr &msg)
{
    int speedsetting = msg->data[2];
    speedsetting = speedsetting * 10;
    qDebug()<< "Speedsetting in mm/s%d" << speedsetting;

    int angularspeed = msg->data[3];

    emit velstatusCallback(speedsetting);
    emit angularspeedCallback(angularspeed);
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
        stm_interface::RelayControl val;
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

void RosThread::shutdown_crawler(int val)
{
    int k = val;
    std_srvs::Trigger b;
    if(k){


        shutdown_.call(b);
        if (b.response.success){

            emit shdCrawler(1);

        }
        else {

            emit shdCrawler(0);


        }
    }
}

void RosThread::reset_water(int val)
{
    int k = val;
    std_srvs::Trigger b;
    if(k){

        qDebug() << "reset Waterlevel";
        reset_waterlevel_.call(b);
        if (b.response.success){
            qDebug() << "reset Water Level";
            emit rstwaterlevel(1);

        }
        else {
            qDebug() << "error resetting crawler";
            emit rstwaterlevel(0);


        }
    }
}


/*!
 * \brief RosThread::armInitSrv calls the service to initialialize and stop the arm
 * \param value 0: stop arm  1: init arm
 */
void RosThread::slideCW(int value)
{
    int k = value;
    std_srvs::Trigger b;
    if(k){

        qDebug() << "init Slide";
        hzl_slide_cw_.call(b);
        emit slideCW(0);
        if (b.response.success){
            qDebug() << "Slider DeActivated";
//            emit slideCW(0);

        }
        else {
            qDebug() << "Moving";
            emit slideCW(0);

        }
    } 
}

void RosThread::slideCCW(int value)
{
    int k = value;
    std_srvs::Trigger b;
    if(k){

        qDebug() << "init Slide";
        hzl_slide_ccw_.call(b);
        emit slideCCW(0);
        if (b.response.success){
            qDebug() << "Slider DeActivated";


        }
        else {
            qDebug() << "Moving";
            emit slideCCW(0);

        }
    }
}

void RosThread::resetTrip(int value)
{
    int k =value;
    std_srvs::Trigger b;
    if(k){

        qDebug() << "init Reset";
        trip_reset_.call(b);
        if (b.response.success){
            qDebug() << "Trip Reset";
            emit resetTrip(0);

        }
        else {
            qDebug() << "Moving";
            emit resetTrip(0);

        }
    }

}

void RosThread::lacCW(int value)
{
    int k = value;
    std_srvs::Trigger b;
    if(k){

        qDebug() << "init LAC";
        lac_cw_.call(b);
        if (b.response.success){
            qDebug() << "LAC DeActivated";
            emit lacCW(0);

        }
        else {
            qDebug() << "Moving";
            emit lacCW(0);

        }
    }
}

void RosThread::cameraInit(int value)
{
    int k =value;
    zed_interfaces::start_remote_stream b;
    if (k){
        camera_init_.call(b);
        if(b.response.result){
            qDebug() << "Camera Started";
            emit cameraInit(0);
        }
        else
            qDebug()<< "Camera Start Failed";
    }
}

void RosThread::lacCCW(int value)
{
    int k = value;
    std_srvs::Trigger b;
    if(k){

        qDebug() << "init LAC";
        lac_ccw_.call(b);
        if (b.response.success){
            qDebug() << "LAC DeActivated";
            emit lacCCW(0);

        }
        else {
            qDebug() << "Moving";
            emit lacCCW(0);

        }
    }
}

void RosThread::speedIncrease(int value)
{
    int k = value;
    std_srvs::SetBool b;
    b.request.data = true;

    if(k) {
        crawler_speed_Increase_.call(b);
        emit speedIncrease(0);

        if (b.response.success){
            qDebug() << "Speed Increased";
        }

        else {
            qDebug() << "Speed Increasing";
            emit speedIncrease(0);
        }


    }

}

void RosThread::speedDecrease(int value)
{
    int k = value;
    std_srvs::SetBool b;
    b.request.data = true;

    if(k) {
        crawler_speed_Decrease_.call(b);
        emit speedDecrease(0);

        if (b.response.success){
            qDebug() << "Speed Decreasing";
        }

        else {
            qDebug() << "Speed Decreasing";
            emit speedDecrease(0);
        }


    }

}

void RosThread::joystickonoff(int value)
{
    int k = value;
    std_srvs::SetBool b;

    if(k)
    {
        b.request.data = true;
        joystickonoff_.call(b);
        emit joystickonoffb(0);

        if (b.response.success)
        {
            qDebug() << "Joystick On Called";
        }
        else {

            qDebug() << "Joystick On Called";
        }
    }
    else
    {
        b.request.data = false;
        joystickonoff_.call(b);
        emit joystickonoffb(0);
        if (b.response.success)
        {
            qDebug() << "Joystick Off Called";

        }
        else {

            qDebug() << "Joystick Off Called";

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


