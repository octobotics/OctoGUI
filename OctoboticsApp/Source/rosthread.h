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

#include "std_msgs/String.h"
#include "std_srvs/Trigger.h"
#include <QString>
#include <QThread>
#include "customplotitem.h"

class RosThread : public QThread
{
    Q_OBJECT

public slots:
    void addLine(QString newLine);
    void sendUtVel(QString value);
    void sendUtData(QString value);
    void sendToolData(QString value);

    // ros subscribers
    void armToolCallback(const std_msgs::Int8ConstPtr &msg);
    void commCallback(const std_msgs::Int8::ConstPtr &msg);
    void battCallback(const std_msgs::Float32::ConstPtr &msg);
    void velCallback(const octo_qt::ang_lin_arr::ConstPtr &msg);
    void thicknessCallback(const serialtoros::thick_arr::ConstPtr &msg);
    void graphCallback(const serialtoros::graph_arr::ConstPtr &msg);

//    void utfCallback(const octo_qt::float_array::ConstPtr &msg);
    void utCallback(const serialtoros::VDE_arr::ConstPtr &msg);
    void fCallback(const std_msgs::Float32::ConstPtr &msg);
    void armInitSrv(int value);
    void crawlerInitSrv(int value);
    void reset_arm(int val);
    void reset_crawler(int val);

//    void utGraph(std_msgs::Int8 i);
//    void convertArr(int* arr[], size_t size);

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
    void utCallback(int vel, int deepcoat, int echo);
    void fCallback(float force);
    void armCallback(bool base, bool shoulder, bool elbow, bool tool);
    void toggleCallback(bool flag);
    void crawlerCallback(bool frontLeft, bool frontRight, bool backrRight, bool backLeft);
    void thicknessCallback(float thickness, float unit);
    void graphCall(QVector<double> data);

private:
    ros::Publisher m_publisher;
    ros::NodeHandlePtr m_nodeHandler;
    ros::Subscriber tool_sub_;
    ros::Subscriber comm_sub_;
    ros::Subscriber batt_sub_;
    ros::Subscriber vel_sub_;
    ros::Subscriber ut_sub_;
    ros::Subscriber f_sub_;
    ros::Subscriber graph_sub_;
    ros::Subscriber thick_sub_;
    ros::Publisher vel_pub_;
    ros::Publisher ut_xrange_pub_;
    ros::Publisher ut_dc_pub_;

//    CustomPlotItem *m_cst;

    //    ros::ServiceServer service;
    ros::ServiceServer toggle_srv_;
    ros::ServiceServer crawler_status_srv_;
    ros::ServiceServer arm_status_srv_;
    ros::ServiceClient arm_init_srv_;
    ros::ServiceClient arm_stop_srv_;
    ros::ServiceClient arm_reset_srv_;
    ros::ServiceClient crawler_init_srv_;
    ros::ServiceClient crawler_stop_srv_;
    ros::ServiceClient crawler_reset_srv_;
    ros::ServiceClient send_tool_srv_;
    ros::ServiceClient switch_grinder_srv_;



};
#endif // ROSTHREAD_H
