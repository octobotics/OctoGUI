#include "rosthread.h"
#include <QDebug>
void RosThread::run()
{
    qDebug() << "RosThread run called";
    m_nodeHandler.reset(new ros::NodeHandle("~")); // check this
    m_publisher = m_nodeHandler->advertise<std_msgs::String>("/awesome_topic", 1000);
    tool_sub_ = m_nodeHandler->subscribe<std_msgs::Int8>("/arm_tool_status", 1, &RosThread::armToolCallback, this);
    comm_sub_ = m_nodeHandler->subscribe<std_msgs::Int8>("/comm_status", 1, &RosThread::commCallback, this);
    batt_sub_ = m_nodeHandler->subscribe<std_msgs::Float32>("/batt_status", 1, &RosThread::battCallback, this);
    vel_sub_ = m_nodeHandler->subscribe<octo_qt::ang_lin_arr>("/vel_status", 1, &RosThread::velCallback, this);
//    utf_sub_ = m_nodeHandler->subscribe<octo_qt::float_array>("/ut_force_status", 1, &RosThread::utfCallback, this);
    ut_sub_ = m_nodeHandler->subscribe<std_msgs::Float32>("/ut_status", 1, &RosThread::utCallback, this);
    f_sub_ = m_nodeHandler->subscribe<std_msgs::Float32>("/force_status", 1, &RosThread::fCallback, this);

    arm_init_srv_ = m_nodeHandler->serviceClient<std_srvs::Trigger>("/octo_arm_teleop/init_teleop");
    crawler_init_srv_ = m_nodeHandler->serviceClient<std_srvs::Trigger>("/skid_steering_teleop/init_teleop");

    toggle_srv_ = m_nodeHandler->advertiseService("toggle_robot", &RosThread::toggleCallback, this);
    crawler_status_srv_ = m_nodeHandler->advertiseService("crawler_status", &RosThread::crawlerCallback, this);
    arm_status_srv_ = m_nodeHandler->advertiseService("arm_status", &RosThread::armCallback, this);
    ros::spin();
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
void RosThread::battCallback(const std_msgs::Float32::ConstPtr &msg)
{
    auto int_msg = msg->data;
    emit battCallback(int_msg);
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
/*void RosThread::utfCallback(const octo_qt::float_array::ConstPtr &msg)
{
    auto ut = msg->data[0];
    auto force = msg->data[1];
    emit utfCallback(ut, force);
}*/
void RosThread::utCallback(const std_msgs::Float32::ConstPtr &msg)
{
    auto ut = msg->data;
    emit utCallback(ut);
}
bool RosThread::toggleCallback(octo_qt::tool_status::Request &req, octo_qt::tool_status::Response &res)
{
    bool toogle_status = req.flag;
    // QString s = QString::number(int_msg);
    qDebug() << Q_FUNC_INFO << toogle_status;
    emit toggleCallback(toogle_status);
    res.response = true;
    return true;
}
bool RosThread::armCallback(octo_qt::motor_status::Request &req, octo_qt::motor_status::Response &res)
{
    //0: base 1:shoulder 2: elbow 3: tool
    int base = req.data[0];
    int shoulder = req.data[1];
    int elbow = req.data[2];
    int tool = req.data[3];
    emit armCallback(base, shoulder, elbow, tool);
    qDebug() << Q_FUNC_INFO << "base :" << base << "shoulder :" << shoulder << "elbow :" << elbow << "tool:" << tool;
    res.response = true;
    return true;
}
bool RosThread::crawlerCallback(octo_qt::motor_status::Request &req, octo_qt::motor_status::Response &res)
{
    int frontLeft = req.data[0];
    int frontRight = req.data[1];
    int backrRight = req.data[2];
    int backLeft = req.data[3];
    emit crawlerCallback(frontLeft, frontRight, backrRight, backLeft);
    qDebug() << Q_FUNC_INFO << "frontLeft :" << frontLeft << "frontRight :" << frontRight << "backrRight :" << backrRight << "backLeft :" << backLeft;
    res.response = true;
    return true;
}
void RosThread::armToolCallback(const std_msgs::Int8::ConstPtr &msg)
{
    auto int_msg = msg->data;
    qDebug() << QString::number(int_msg);
    emit armToolCallback(int_msg);
}
void RosThread::armInitSrv(int value)
{
   //
    int k = value;
    std_srvs::Trigger b;
    if(k){

        qDebug() << "button 1 pressed";

    }
    arm_init_srv_.call(b);
    if (b.response.success){
        qDebug() << "called arm teleop";

    }
    else {
        qDebug() << "error arm teleop";

    }
}
void RosThread::crawlerInitSrv(int value)
{
   //
    int k = value;
    std_srvs::Trigger b;
    if(k){

        qDebug() << "button 2 pressed";

    }
    crawler_init_srv_.call(b);
    if (b.response.success){
        qDebug() << "called crawler teleop";

    }
    else {
        qDebug() << "error crawler teleop";

    }
}
