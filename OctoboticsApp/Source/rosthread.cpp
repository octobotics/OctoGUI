#include "rosthread.h"
//#import
#include <QDebug>
#include <bits/stdc++.h>

QString graph_path_ = "";

void RosThread::run()
{   CustomPlotItem *m_cst = new CustomPlotItem();
    qDebug() << "RosThread run called";
    error_[0] = "NO Error [Radhe Radhe]";
    error_[2] = "Motor Stalled [Critical]";
    error_[4] = "Low Pressure [Donno Dude]";
    error_[8] = " Over Voltage [Moderate]";
    error_[16] = "Over Current [Critical]";
    error_[64] = "Power Overrun [Moderate]";
    error_[256] = "Speeding [Moderate]";
    error_[512] = "Empty Error 1";
    error_[1024] = "Empty Error 2";
    error_[2048] = "Empty Error 3";
    error_[4096] = "Very High Temperature [Moderate]";
    error_[8192] = "Encoder Calibration Error [Moderate]";

    c_motors_[0] = "Front Left";
    c_motors_[1] = "Front Right";
    c_motors_[2] = "Rear Right";
    c_motors_[3] = "Rear Left";

    m_nodeHandler.reset(new ros::NodeHandle("~")); // check this


    m_publisher = m_nodeHandler->advertise<std_msgs::String>("/awesome_topic", 1000);
    vel_pub_ = m_nodeHandler->advertise<std_msgs::Int64>("/send_ut_velocity", 1);
    ut_xrange_pub_ = m_nodeHandler->advertise<std_msgs::Int16 >("/send_ut_xrange", 1);
    ut_dc_pub_ = m_nodeHandler->advertise<std_msgs::Int8>("/send_ut_deepcoat", 1);
    img_cap_pub_ = m_nodeHandler->advertise<std_msgs::Int8>("/img_cap", 1);

    //    img_pub_ =  m_nodeHandler->advertise<sensor_msgs::Image>("/send_image", 1);
    tool_sub_ = m_nodeHandler->subscribe<std_msgs::Int8>("/arm_tool_status", 1, &RosThread::armToolCallback, this);
    comm_sub_ = m_nodeHandler->subscribe<std_msgs::Int8>("/comm_status", 1, &RosThread::commCallback, this);
    vel_sub_ = m_nodeHandler->subscribe<octo_qt::ang_lin_arr>("/vel_status", 1, &RosThread::velCallback, this);
    thick_sub_ = m_nodeHandler->subscribe<serialtoros::thick_arr>("/ut_thickness", 1, &RosThread::thicknessCallback, this);
    graph_sub_ = m_nodeHandler->subscribe<serialtoros::graph_arr>("/ut_graph", 1, &RosThread::graphCallback, this);
    crawler_status_sub_ = m_nodeHandler->subscribe<my_actuator::vitals>("/crawler_vitals",1, &RosThread::crawlerCallback, this);
    //    arm_status_sub_ = m_nodeHandler->subscribe<octo_arm_teleop::send_adra_status>("/octo_arm_status",1, &RosThread::armCallback,this);


    //    crawler_status_sub_ = m_nodeHandler->subscribe("/crawler_vitals",)
    connect(this, SIGNAL(graphCall(QVector<double>, QVector<double>, int64_t)), m_cst, SLOT(graphCall(QVector<double>, QVector<double>,int64_t)));
    connect(this, SIGNAL(trigImg(int)), m_cst, SLOT(trigImg(int)));

    //    utf_sub_ = m_nodeHandler->subscribe<octo_qt::float_array>("/ut_force_status", 1, &RosThread::utfCallback, this);
    ut_sub_ = m_nodeHandler->subscribe<serialtoros::VDE_arr>("/ut_VDE_values", 1, &RosThread::utCallback, this);
    f_sub_ = m_nodeHandler->subscribe<std_msgs::Float32>("/force_status", 1, &RosThread::fCallback, this);
    pressure_sub_ = m_nodeHandler->subscribe<std_msgs::Float32>("/pressure", 1, &RosThread::pressureCallback, this);

    arm_init_srv_ = m_nodeHandler->serviceClient<std_srvs::Trigger>("/octo_arm_teleop/init_teleop");
    arm_stop_srv_ = m_nodeHandler->serviceClient<std_srvs::Trigger>("/octo_arm_teleop/stop_teleop");
    arm_reset_srv_ = m_nodeHandler->serviceClient<std_srvs::Trigger>("/octo_arm_teleop/reset_motors");
    get_arm_status_srv_ = m_nodeHandler->serviceClient<octo_arm_teleop::GUI_adra_stat>("/gui_adra_status_srv");
    crawler_init_srv_ = m_nodeHandler->serviceClient<std_srvs::Trigger>("/crawler_control_node/init_teleop");
    crawler_stop_srv_ = m_nodeHandler->serviceClient<std_srvs::Trigger>("/crawler_control_node/stop_teleop");
    crawler_reset_srv_ = m_nodeHandler->serviceClient<std_srvs::Trigger>("/crawler_control_node/stop_motors");

    send_tool_srv_ =  m_nodeHandler->serviceClient<stm_client::relay_control>("/relay_toggle_channel");
    switch_grinder_srv_ =  m_nodeHandler->serviceClient<std_srvs::Trigger>("/servo_trigger_channel");

    toggle_srv_ = m_nodeHandler->advertiseService("toggle_robot", &RosThread::toggleCallback, this);
    send_img_srv_ = m_nodeHandler->advertiseService("img_send", &RosThread::imgCallback, this);
    ros::spin();
//    ros::waitForShutdown();

}


void RosThread::addLine(QString newLine)
{
    ros::Rate rate(10);
    std_msgs::String msg;
    msg.data = newLine.toUtf8().constData();
    m_publisher.publish(msg);
}
void RosThread::commCallback(const std_msgs::Int8::ConstPtr &msg)
{
    auto int_msg = msg->data;

    emit commCallback(int_msg);
}

void RosThread::velCallback(const octo_qt::ang_lin_arr::ConstPtr &msg)
{
    auto current_vel_linear = msg->data[0];
    auto current_vel_angular = msg->data[1];
    auto max_linear = msg->data[2];
    auto max_angular = msg->data[3];
    emit velCallback(current_vel_linear, current_vel_angular, max_linear, max_angular);
}
void RosThread::fCallback(const std_msgs::Float32::ConstPtr &msg)
{
    auto force = msg->data;
    emit fCallback(force);
}
void RosThread::crawlerCallback(const my_actuator::vitals::ConstPtr &msg)
{
    float voltage = msg->voltage;
    //qDebug()<<"volt"<<voltage;
    //qDebug()<<"temp"<<msg->temp[1];

    bot_err.resize(4);
    act_temp.resize(4);
    for(int i =0; i<4; i++)
    {
        //        bot_err[i] =  c_motors_[i] + " : " +  error_[msg->error[i]];
        bot_err[i] = msg->error[i];

        act_temp[i] = msg->temp[i];

    }

    emit crawlerCallback( (bool)msg->mode[0], (bool)msg->mode[1], (bool)msg->mode[2], (bool)msg->mode[3]);
    emit battCallback(voltage);
    emit tempCallback(act_temp);
    emit errorCallback(bot_err);
    // qDebug() << Q_FUNC_INFO << "frontLeft :" << frontLeft << "frontRight :" << frontRight << "backrRight :" << backrRight << "backLeft :" << backLeft;
}

void RosThread::utCallback(const serialtoros::VDE_arr::ConstPtr &msg)
{
    auto vel = msg->data[0];
    auto deepcoat = msg->data[2];
    auto echo = msg->data[1];
    //    qDebug() << vel << "ros";

    emit utCallback(vel, deepcoat, echo);
}
bool RosThread::toggleCallback(octo_qt::tool_status::Request &req, octo_qt::tool_status::Response &res)
{
    bool toogle_status = req.flag;
    // QString s = QString::number(int_msg);
    // qDebug() << Q_FUNC_INFO << toogle_status;
    emit toggleCallback(toogle_status);
    res.response = true;
    return true;
}
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
    qDebug()<<QString::number(msg.response.error_motors[1]);

    emit armCallback(arm_status);

}

void RosThread::armToolCallback(const std_msgs::Int8::ConstPtr &msg)
{
    auto int_msg = msg->data;
    // qDebug() << QString::number(int_msg);
    emit armToolCallback(int_msg);
}
void RosThread::armInitSrv(int value)
{
    //
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

void RosThread::capImgPub(int value)
{
    std_msgs::Int8 k;
    k.data= value;
    img_cap_pub_.publish(k);

}
void RosThread::crawlerInitSrv(int value)
{
    //
    int k = value;
    std_srvs::Trigger b;
    if(k){

        qDebug() << "init crawler";
        crawler_init_srv_.call(b);
        if (b.response.success){
            qDebug() << "initialized crawler";
            emit initCrawler(1);

        }
        else {
            qDebug() << "error initializing crawler";
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

void RosThread::thicknessCallback(const serialtoros::thick_arr::ConstPtr &msg)
{
    float thickness_ = msg->data[0];
    thickness_  = round(thickness_ * 100) / 100;

    auto unit_ = msg->data[1];
    emit thicknessCallback(thickness_, unit_);
}
void RosThread::graphCallback(const serialtoros::graph_arr::ConstPtr &msg)
{
    auto data_ = msg->data;
    auto tuple_ = msg->echo_arr;
    int64_t x_range_= msg->x_range;

    size_t n = sizeof(data_)/sizeof(data_[0]);
    QVector<double> v(320), tuple(3);// initialize with entries 0..100


    tuple[0] = tuple_[0];
    tuple[1] = tuple_[1];
    tuple[2] = tuple_[2];

    // loop through the array elements
    for (size_t i = 0; i < n; i++) {
        //           qDebug() << data_[i] << ' ';
        v[i] = data_[i];
    }


    emit  graphCall(v, tuple,x_range_);


}

void RosThread::sendUtVel(QString value)
{
    ros::Rate rate(10);
    std_msgs::Int64 msg;
    msg.data = value.toInt();
    vel_pub_.publish(msg);
}
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

void RosThread::sendToolData(QString value)
{
    //    qDebug()<<value;
    if(value == "0")
    {
        std_srvs::Trigger k;
        switch_grinder_srv_.call(k);

    }
    else{
        stm_client::relay_control val;
        val.request.data = value.toInt();
        qDebug()<<"relay_value:"<<value;
        send_tool_srv_.call(val);

    }

}

void RosThread::reset_arm(int val)
{
    int k = val;
    std_srvs::Trigger b;
    if(k){

        qDebug() << "reset arm";
        arm_reset_srv_.call(b);
        if (b.response.success){
            qDebug() << "reset arm done";
            emit rstArm(1);

        }
        else {
            qDebug() << "error resetting arm";
            emit rstArm(0);

        }
    }

}

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

void RosThread::saveImg(QString img)
{

    graph_path_ = img;

}

bool RosThread::imgCallback(serialtoros::graph_path::Request &req, serialtoros::graph_path::Response &res )
{

    if (req.req ==1 )
    {   int i = 1;
        emit trigImg(i);
        qDebug()<<graph_path_;
        ros::Duration(0.2).sleep();

        res.path = graph_path_.toStdString();
        graph_path_ = "";
    }
    return 0;

}
void RosThread::pressureCallback(const std_msgs::Float32::ConstPtr &msg){

    auto pressure = msg->data;
    qDebug()<< pressure;

    emit pressureCallback(pressure);



}
