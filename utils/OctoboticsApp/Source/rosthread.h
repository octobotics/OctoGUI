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
#include "std_msgs/Float64.h"
#include "octo_qt/float_array.h"
#include "octo_qt/ang_lin_arr.h"
#include "stm_client/tool_status.h"
#include "std_msgs/Int8.h"
#include "std_msgs/Int16.h"
#include "std_msgs/Int32.h"
#include "std_msgs/Int64.h"
#include "std_srvs/SetBool.h"
#include "geometry_msgs/Vector3.h"
#include "stm_interface/RelayControl.h"
#include "serialtoros/GraphPath.h"
#include "my_actuator/vitals.h"
#include "std_msgs/String.h"
#include "std_srvs/Trigger.h"
#include <QString>
#include <QThread>
#include "customplotitem.h"
#include <bits/stdc++.h>
#include "launch_crawler/SerialNumbers.h"
#include "octo_arm_teleop/GUI_adra_stat.h"
#include "stm_client/cam_array.h"
#include "zed_interfaces/start_remote_stream.h"
#include "zed_interfaces/stop_remote_stream.h"
#include "hector_mapping/ResetMapping.h"

/*!
 * \brief The RosThread class is a QThread to run a ros node
 */
class RosThread : public QThread
{
    Q_OBJECT


public slots:
    void addLine(QString newLine);
    void automodePub(int value);
    //ros publishers
    void pos_angle (QString value);
    void neg_angle (QString value);
    void cycles_val (QString value);

    void lat_angle (QString value);


    //ros subscribers
    void lacCallback(const std_msgs::Int32::ConstPtr &msg);
    void waterCallback(const std_msgs::Float32::ConstPtr &msg);
    void commCallback(const std_msgs::Int16::ConstPtr &msg);
    void armToolCallback(const std_msgs::Int8ConstPtr &msg);
    void velCallback(const std_msgs::Int16::ConstPtr &msg);
    void odomCallback(const std_msgs::Int32::ConstPtr &msg);
    void tripCallback(const std_msgs::Int32::ConstPtr &msg);
    void crawlerCallback(const my_actuator::vitals::ConstPtr &msg);
    void velstatusCallback(const octo_qt::ang_lin_arr::ConstPtr &msg);
    void angleCallback(const geometry_msgs::Vector3::ConstPtr &msg);

    void currentCallback(const std_msgs::Int32::ConstPtr &msg);
    void uidCallback(const launch_crawler::SerialNumbers::ConstPtr &msg);
    void batteryCallback(const std_msgs::Int16::ConstPtr &msg);
    // ut_thickness
    void utThicknessCallback(const std_msgs::Float64::ConstPtr &msg);
    // gridnum
    void gridNumSubCallback(const std_msgs::Int32::ConstPtr &msg);


    //ros service servers
    bool toggleCallback(stm_client::tool_status::Request &req, stm_client::tool_status::Response &res);

    //ros service clients
    void sendToolData(QString value);
    void crawlerInitSrv(int value);
    void resetMapping(int value);

    //------------------------Auto Mode--------------
    void stopautoSrv(int value);
    void initautoSrv(int value);

    //----------------------------------------------
    void reset_crawler(int val);
    void shutdown_crawler(int val);

    void resetTrip(int value);
    void reset_water(int value);
    void slideCW(int value);
    void slideCCW(int value);
    void speedIncrease(int value);
    void speedDecrease(int value);
    void joystickonoff(int value);
    void abort(int value);
    void lacCW(int value);
    void lacCCW(int value);
    void cameraInit(int value);
    void checkArmStatus();
    void reset_arm(int val);
    void saveImg(QString img);

    void pause_treeSrv(int val4);
    // void emSrv(int val4);

//ut_thickness
    //void utThicknessCallback(const std_msgs::Float64::ConstPtr &msg);
    // grid sacn

void gridScanSrv(int value);
//void saveCSV(int value);

//raster Scan
void rasterScanSrv(int value);

// botservice
void botServiceSlotSrv(int val);






public:
    void run();

signals:
    //signalsFs
//    void voltageCallback(int value);
    void waterCallback(float level);
    void commCallback(int value);
    void armToolCallback(int value);
    void battCallback(float value);
    void angleCallback(int angle);
    void tempCallback(QVector<int> temp);
    void errorCallback(QVector<int> err);
    void velCallback(int current_vel_linear);
    void odomCallback(int current_odom);
    void tripCallback(int current_trip);
    void crawlerCallback(bool m1, bool m2, bool m3, bool m4);
    void armCallback(QVector<int> arm_status);

    void uidCallback(QVector<QString> uid);
    void currentCallback(int current);

    void toggleCallback(bool flag);
    void trigImg(int k);


    //--------------------------
    void slideCW(bool k);
    void slideCCW(bool k);
    void lacCW(bool k);
    void lacCCW(bool k);
    void lacCallback(int lac_value);
    // void batteryCallback(int voltage);
    void resetTrip(bool k);
    void speedIncrease(bool k);
    void speedDecrease(bool k);
    void joystickonoffb(bool k);
    void abortautob(bool k);    //--------------------------

    void velstatusCallback(int speedsetting);
    void angularspeedCallback(int angularspeed);

    void stopArm(bool k );
    void rstArm(bool k);
    void initCrawler(bool k);
    void resetmapping(bool k);

    //-----------------Auto Mode---------------------
    void stopauto(bool k);
    void initauto(bool k);
    //-----------------Auto Mode---------------------
    void stopCrawler(bool k );
    void rstCrawler(bool k);
    void shdCrawler(bool k);
    void cameraInit(bool k);
    void rstwaterlevel(bool k);

    void pause_treeStatus(int val4);
    // void emStatus(int val4);

    // ut_thickness
    void utThicknessCallback(float thickness);
    //void utThicknessCallback(float thickness);

    //gridnum
        void gridNumSubCallback(int gridnum);



    //grid scan
    void startGridScan(bool k);
    void stopGridScan(bool k);

    

private:
    ros::NodeHandlePtr m_nodeHandler;

    ros::Publisher m_publisher;
    ros::Publisher vel_pub_;
    ros::Publisher automode_pub_ ;
    ros::Publisher pos_angle_pub_;
    ros::Publisher neg_angle_pub_;
    ros::Publisher lat_angle_pub_;

    ros::Publisher cycles_pub_;
    ros::Publisher ui_stroke_pub_;
    

//    ros::Publisher img_cap_pub_;

    ros::Subscriber comm_sub_;
    ros::Subscriber tool_sub_;
    ros::Subscriber vel_sub_;
    ros::Subscriber odometer_;
    ros::Subscriber tripmeter_;
    ros::Subscriber crawler_status_sub_;
    ros::Subscriber angle_measure_; 


    ros::Subscriber current_sub_;
    ros::Subscriber uid_sub_;
    ros::Subscriber water_level_;
    ros::Subscriber lac_pos_ ;
    ros::Subscriber voltage_;
    ros::Subscriber velstatus_;

    // ut_thickness
    ros::Subscriber ut_thickness_;
    // GRIDNUM 
    	ros::Subscriber gridnum_sub_;
    //ros Service Server
    ros::ServiceServer toggle_srv_;
    ros::ServiceServer send_img_srv_;

    // ros service client
    ros::ServiceClient send_tool_srv_;
    ros::ServiceClient restart_mapping_srv_;
    ros::ServiceClient switch_grinder_srv_;
    ros::ServiceClient crawler_init_srv_;
    ros::ServiceClient crawler_stop_srv_;
    ros::ServiceClient crawler_reset_srv_;
    ros::ServiceClient crawler_speed_Increase_;
    ros::ServiceClient crawler_speed_Decrease_;
    ros::ServiceClient joystickonoff_;
    ros::ServiceClient abort_;


    ros::ServiceClient pause_tree;
    ros::ServiceClient start_grid_scanning_srv_;
    ros::ServiceClient start_raster_scanning_srv_;
    ros::ServiceClient abort_raster_scanning_srv_;
    ros::ServiceClient abort_grid_mapping_srv_;

    //-------------------------Auto Mode---------------
    ros::ServiceClient initauto_;
    ros::ServiceClient stopauto_;

    ros::ServiceClient hzl_slide_cw_;
    ros::ServiceClient reset_waterlevel_;
    ros::ServiceClient hzl_slide_ccw_;
    ros::ServiceClient arm_stop_srv_; //
    ros::ServiceClient arm_reset_srv_; //
    ros::ServiceClient lac_cw_;
    ros::ServiceClient lac_ccw_;
    ros::ServiceClient trip_reset_;
    ros::ServiceClient get_arm_status_srv_;
    ros::ServiceClient camera_init_ ;
    ros::ServiceClient camera_stop_ ;
    ros::ServiceClient shutdown_ ;

    ros::ServiceClient bot_reboot_srv_ ;
    ros::ServiceClient bot_shutdown_srv_ ;





    //variables
    QVector<int> bot_err;
    QVector<int> act_temp;
    QVector<int> arm_status;
    QMap<int, QString> error_;
    QMap<int, QString> c_motors_;
    QVector<QString> uids_;





};
#endif // ROSTHREAD_H