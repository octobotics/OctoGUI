#include "rosthread.h"
//#import
#include <QDebug>
#include <bits/stdc++.h>

void RosThread::run()
{   CustomPlotItem *m_cst = new CustomPlotItem();
    qDebug() << "RosThread run called";
    m_nodeHandler.reset(new ros::NodeHandle("~")); // check this
    m_publisher = m_nodeHandler->advertise<std_msgs::String>("/awesome_topic", 1000);
    vel_pub_ = m_nodeHandler->advertise<std_msgs::Int64>("/send_ut_velocity", 1);
    ut_xrange_pub_ = m_nodeHandler->advertise<std_msgs::Int16 >("/send_ut_xrange", 1);
    ut_dc_pub_ = m_nodeHandler->advertise<std_msgs::Int8>("/send_ut_deepcoat", 1);

    tool_sub_ = m_nodeHandler->subscribe<std_msgs::Int8>("/arm_tool_status", 1, &RosThread::armToolCallback, this);
    comm_sub_ = m_nodeHandler->subscribe<std_msgs::Int8>("/comm_status", 1, &RosThread::commCallback, this);
    batt_sub_ = m_nodeHandler->subscribe<std_msgs::Float32>("/batt_status", 1, &RosThread::battCallback, this);
    vel_sub_ = m_nodeHandler->subscribe<octo_qt::ang_lin_arr>("/vel_status", 1, &RosThread::velCallback, this);
    thick_sub_ = m_nodeHandler->subscribe<serialtoros::thick_arr>("/ut_thickness", 1, &RosThread::thicknessCallback, this);
    graph_sub_ = m_nodeHandler->subscribe<serialtoros::graph_arr>("/ut_graph", 1, &RosThread::graphCallback, this);
    connect(this, SIGNAL(graphCall(QVector<double>)), m_cst, SLOT(graphCall(QVector<double>)));

//    utf_sub_ = m_nodeHandler->subscribe<octo_qt::float_array>("/ut_force_status", 1, &RosThread::utfCallback, this);
    ut_sub_ = m_nodeHandler->subscribe<serialtoros::VDE_arr>("/ut_VDE_values", 1, &RosThread::utCallback, this);
    f_sub_ = m_nodeHandler->subscribe<std_msgs::Float32>("/force_status", 1, &RosThread::fCallback, this);
    arm_init_srv_ = m_nodeHandler->serviceClient<std_srvs::Trigger>("/octo_arm_teleop/init_teleop");
    arm_stop_srv_ = m_nodeHandler->serviceClient<std_srvs::Trigger>("/octo_arm_teleop/stop_teleop");
    arm_reset_srv_ = m_nodeHandler->serviceClient<std_srvs::Trigger>("/octo_arm_teleop/reset_motors");

    crawler_init_srv_ = m_nodeHandler->serviceClient<std_srvs::Trigger>("/skid_steering_teleop/init_teleop");
    crawler_stop_srv_ = m_nodeHandler->serviceClient<std_srvs::Trigger>("/skid_steering_teleop/stop_teleop");
    crawler_reset_srv_ = m_nodeHandler->serviceClient<std_srvs::Trigger>("/skid_steering_teleop/stop_motors");

     send_tool_srv_ =  m_nodeHandler->serviceClient<stm_client::relay_control>("/relay_toggle_channel");
     switch_grinder_srv_ =  m_nodeHandler->serviceClient<std_srvs::Trigger>("/servo_trigger_channel");

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

         qDebug() << "init arm";
         arm_init_srv_.call(b);
         if (b.response.success){
             qDebug() << "initialized arm";

         }
         else {
             qDebug() << "error initializing arm";

         }
     }
     else{

         qDebug() << "stop arm";
         arm_stop_srv_.call(b);
         if (b.response.success){
             qDebug() << "stopped arm";

         }
         else {
             qDebug() << "error stopping arm";

         }
     }

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

        }
        else {
            qDebug() << "error initializing crawler";

        }
    }
    else{

        qDebug() << "stop crawler";
        crawler_stop_srv_.call(b);
        if (b.response.success){
            qDebug() << "stopped crawler";

        }
        else {
            qDebug() << "error stopping crawler";

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

   size_t n = sizeof(data_)/sizeof(data_[0]);
       QVector<double> v(320);// initialize with entries 0..100

       // loop through the array elements
       for (size_t i = 0; i < n; i++) {
//           qDebug() << data_[i] << ' ';
           v[i] = data_[i];
       }
      emit  graphCall(v);


}
//void RosThread::graphCallback(QVector<int> v)
//{
////emit graphCallback(v);
//}


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

        }
        else {
            qDebug() << "error resetting arm";

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

        }
        else {
            qDebug() << "error resetting crawler";

        }
    }

}
