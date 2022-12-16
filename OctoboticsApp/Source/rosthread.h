#ifndef ROSTHREAD_H
#define ROSTHREAD_H
#include "octo_qt/motor_status.h"
#include "octo_qt/tool_status.h"
#include "ros/ros.h"
#include "std_msgs/Float32.h"
#include "octo_qt/float_array.h"
#include "octo_qt/ang_lin_arr.h"
#include "std_msgs/Int8.h"
#include "std_msgs/String.h"
#include "std_srvs/Trigger.h"
#include <QString>
#include <QThread>
class RosThread : public QThread
{
    Q_OBJECT
public slots:
    void addLine(QString newLine);
    // ros subscribers
    void armToolCallback(const std_msgs::Int8ConstPtr &msg);
    void commCallback(const std_msgs::Int8::ConstPtr &msg);
    void battCallback(const std_msgs::Float32::ConstPtr &msg);
    void velCallback(const octo_qt::ang_lin_arr::ConstPtr &msg);
//    void utfCallback(const octo_qt::float_array::ConstPtr &msg);
    void utCallback(const std_msgs::Float32::ConstPtr &msg);
    void fCallback(const std_msgs::Float32::ConstPtr &msg);
    void armInitSrv(int value);
    void crawlerInitSrv(int value);

    //ros service
    bool toggleCallback(octo_qt::tool_status::Request &req, octo_qt::tool_status::Response &res);
    bool armCallback(octo_qt::motor_status::Request &req, octo_qt::motor_status::Response &res);
    bool crawlerCallback(octo_qt::motor_status::Request &req, octo_qt::motor_status::Response &res);
public:
    void run();
signals:
    void armToolCallback(int value);
    void commCallback(int value);
    void battCallback(float value);
    void velCallback(float current_vel_linear, float current_vel_angular, float max_linear, float max_angular);
//    void utfCallback(float ut, float force);
    void utCallback(float ut);
    void fCallback(float force);
    void armCallback(bool base, bool shoulder, bool elbow, bool tool);
    void toggleCallback(bool flag);
    void crawlerCallback(bool frontLeft, bool frontRight, bool backrRight, bool backLeft);
private:
    ros::Publisher m_publisher;
    ros::NodeHandlePtr m_nodeHandler;
    ros::Subscriber tool_sub_;
    ros::Subscriber comm_sub_;
    ros::Subscriber batt_sub_;
    ros::Subscriber vel_sub_;
    ros::Subscriber ut_sub_;
    ros::Subscriber f_sub_;
    //    ros::ServiceServer service;
    ros::ServiceServer toggle_srv_;
    ros::ServiceServer crawler_status_srv_;
    ros::ServiceServer arm_status_srv_;
    ros::ServiceClient arm_init_srv_;
    ros::ServiceClient crawler_init_srv_;

};
#endif // ROSTHREAD_H
