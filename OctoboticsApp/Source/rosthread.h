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
#include "std_msgs/Int8.h"
#include "std_msgs/Int16.h"
#include "std_msgs/Int64.h"
#include "stm_client/relay_control.h"
#include "serialtoros/graph_path.h"
#include "my_actuator/vitals.h"
#include "std_msgs/String.h"
#include "std_srvs/Trigger.h"
#include <QString>
#include <QThread>
#include "customplotitem.h"
#include<bits/stdc++.h>
//#include "octo_arm_teleop/send_adra_status.h"
#include "octo_arm_teleop/GUI_adra_stat.h"
class RosThread : public QThread
{
    Q_OBJECT

public slots:
    void checkArmStatus();
    void armInitSrv(int value);
    void crawlerInitSrv(int value);
    void capImgPub(int value);
    void reset_arm(int val);
    void reset_crawler(int val);
    void addLine(QString newLine);
    void sendUtVel(QString value);
    void sendUtData(QString value);
    void sendToolData(QString value);
    void saveImg(QString img);
    void pressureCallback(const std_msgs::Float32::ConstPtr &msg);
    // ros subscribers
    void armToolCallback(const std_msgs::Int8ConstPtr &msg);
    void commCallback(const std_msgs::Int8::ConstPtr &msg);
    void velCallback(const octo_qt::ang_lin_arr::ConstPtr &msg);
    void thicknessCallback(const serialtoros::thick_arr::ConstPtr &msg);
    void graphCallback(const serialtoros::graph_arr::ConstPtr &msg);
    void utCallback(const serialtoros::VDE_arr::ConstPtr &msg);
    void fCallback(const std_msgs::Float32::ConstPtr &msg);
    void crawlerCallback(const my_actuator::vitals::ConstPtr &msg);

    //ros service
    bool toggleCallback(octo_qt::tool_status::Request &req, octo_qt::tool_status::Response &res);
    bool imgCallback(serialtoros::graph_path::Request &req, serialtoros::graph_path::Response &res );
public:
    void run();

signals:
    void armToolCallback(int value);
    void commCallback(int value);
    void battCallback(float value);
    void tempCallback(QVector<int> temp);
    void errorCallback(QVector<int> err);
    void velCallback(float current_vel_linear, float current_vel_angular, float max_linear, float max_angular);
    void utCallback(int vel, int deepcoat, int echo);
    void fCallback(float force);
    void pressureCallback(float force);

    void armCallback(QVector<int> arm_status);
    void toggleCallback(bool flag);
    void crawlerCallback(bool m1, bool m2, bool m3, bool m4);
    void thicknessCallback(float thickness, float unit);
    void graphCall(QVector<double> data, QVector<double> tuple,int64_t x_range);
    void trigImg(int k);
    void initArm(bool k);
    void stopArm(bool k );
    void rstArm(bool k);
    void rstCrawler(bool k);
    void initCrawler(bool k);
    void stopCrawler(bool k );


private:
    ros::Publisher m_publisher;
    ros::NodeHandlePtr m_nodeHandler;
    ros::Subscriber tool_sub_;
    ros::Subscriber comm_sub_;
    ros::Subscriber crawler_status_sub_;
    ros::Subscriber arm_status_sub_;
    ros::Subscriber pressure_sub_;
    ros::Subscriber batt_sub_;
    ros::Subscriber vel_sub_;
    ros::Subscriber ut_sub_;
    ros::Subscriber f_sub_;
    ros::Subscriber graph_sub_;
    ros::Subscriber thick_sub_;
    ros::Publisher vel_pub_;
    ros::Publisher ut_xrange_pub_;
    ros::Publisher ut_dc_pub_;
    ros::Publisher img_pub_;
    ros::Publisher img_cap_pub_;
    //    ros::ServiceServer service;
    ros::ServiceServer toggle_srv_;
    ros::ServiceServer send_img_srv_;
    ros::ServiceClient arm_init_srv_;
    ros::ServiceClient arm_stop_srv_;
    ros::ServiceClient arm_reset_srv_;
    ros::ServiceClient crawler_init_srv_;
    ros::ServiceClient crawler_stop_srv_;
    ros::ServiceClient crawler_reset_srv_;
    ros::ServiceClient send_tool_srv_;
    ros::ServiceClient switch_grinder_srv_;
    ros::ServiceClient get_arm_status_srv_;
    QVector<int> bot_err;
    QVector<int> act_temp;
    QVector<int> arm_status;
    QMap<int, QString> error_;
    QMap<int, QString> c_motors_;


};
#endif // ROSTHREAD_H
