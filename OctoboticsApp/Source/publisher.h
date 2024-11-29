/*!
 *  \file      publisher.h
 *  \brief     Connects ros data with qt.
 *  \details   This class acts as a mediator between ros node and our qml page. It coverts data, notifies any changes in data from both UI and ros node.
 *  \authors   Charith Reddy, Venkat
 *  \copyright Copyright (C) 2022 Octobotics Tech Pvt. Ltd. All Rights Reserved.
                Do not remove this copyright notice.
                Do not use, reuse, copy, merge, publish, sub-license, sell, distribute or modify this code - except without explicit,
                written permission from Octobotics Tech Pvt. Ltd.
                Contact connect@octobotics.tech for full license information.

 *  \todo      None
 *  \warning   Improper use can crash the application
 */


#pragma once 
#ifndef PUBLISHER_H
#define PUBLISHER_H
#include "rosthread.h"
#include <QDebug>
#include <QString>
#include <QThread>
#include <vector>
#include <QVector>
#include <QMatrix>


/*!
 * \brief The Publisher class acts as a mediator between ros node and our qml page.
 */
class Publisher : public QObject
{
    Q_OBJECT

    // QProperty is like a C++ lambda and can be used to express relationships between different properties

    // communication
    Q_PROPERTY(int comStatus READ getComStatus WRITE setComStatus NOTIFY comStatusChanged)
    Q_PROPERTY(QString posval READ getposval WRITE setposval NOTIFY posvalValueChanged)
    Q_PROPERTY(QString negval READ getnegval WRITE setnegval NOTIFY negvalValueChanged)
    Q_PROPERTY(QString cyclesval READ getcyclesval WRITE setcyclesval NOTIFY cyclesvalValueChanged)
    // crawler arm toggle status
    Q_PROPERTY(bool toggleValue READ getToggleValue WRITE setToggleValue NOTIFY toggleValueChanged)
    // arm tool
    Q_PROPERTY(int armToolStatus READ getArmToolStatus WRITE setArmToolStatus NOTIFY armToolStatusChanged)
    Q_PROPERTY(QString toolToggle READ getToolToggle WRITE setToolToggle NOTIFY toolToggleChanged)

    // arm

    Q_PROPERTY(bool cameraInit READ getcameraInitValue WRITE setcameraInitValue NOTIFY cameraInitValueChanged)
    Q_PROPERTY(bool slideCW READ getslideCWValue WRITE setslideCWValue NOTIFY slideCWValueChanged)
    Q_PROPERTY(bool slideCCW READ getslideCCWValue WRITE setslideCCWValue NOTIFY slideCCWValueChanged)
    Q_PROPERTY(bool speedIncrease READ getspeedIncrease WRITE setspeedIncrease NOTIFY speedIncreaseValueChanged)
    Q_PROPERTY(bool speedDecrease READ getspeedDecrease WRITE setspeedDecrease NOTIFY speedDecreaseValueChanged)
    Q_PROPERTY(bool joystickonoff READ getjoystickonoff WRITE setjoystickonoff NOTIFY joystickonoffValueChanged)
    Q_PROPERTY(bool abortauto READ getabortauto WRITE setabortauto NOTIFY abortautoValueChanged)

    Q_PROPERTY(bool lacCW READ getlacCWValue WRITE setlacCWValue NOTIFY lacCWValueChanged)
    Q_PROPERTY(bool lacCCW READ getlacCCWValue WRITE setlacCCWValue NOTIFY lacCCWValueChanged)
    Q_PROPERTY(int lacValue READ getlacValue WRITE setlacValue NOTIFY lacValueChanged)

    Q_PROPERTY(bool stopArmValue READ getStopArmValue WRITE setStopArmValue NOTIFY stopArmValueChanged)
    Q_PROPERTY(bool rstArmValue READ getRstArmValue WRITE setRstArmValue NOTIFY rstArmValueChanged)
    Q_PROPERTY(QVector<int> armStatus READ getArmStatus WRITE setArmStatus NOTIFY armStatusChanged)

    // crawler
    Q_PROPERTY(bool initCrawlerValue READ getInitCrawlerValue WRITE setInitCrawlerValue NOTIFY initCrawlerValueChanged)
    Q_PROPERTY(bool stopCrawlerValue READ getStopCrawlerValue WRITE setStopCrawlerValue NOTIFY stopCrawlerValueChanged)
    Q_PROPERTY(bool rstCrawlerValue READ getRstCrawlerValue WRITE setRstCrawlerValue NOTIFY rstCrawlerValueChanged)
    Q_PROPERTY(bool stopautoValue READ getstopautoValue WRITE setstopautoValue NOTIFY stopautoValueChanged)
    Q_PROPERTY(bool initautoValue READ getinitautoValue WRITE setinitautoValue NOTIFY initautoValueChanged)
    Q_PROPERTY(bool shdCrawlerValue READ getshdCrawlerValue WRITE setshdCrawlerValue NOTIFY shdCrawlerValueChanged)
    Q_PROPERTY(bool rstwaterlevelValue READ getrstwaterlevelValue WRITE setshdCrawlerValue NOTIFY shdCrawlerValueChanged)
    Q_PROPERTY(QVector<int> errValue READ getErrValue WRITE setErrValue NOTIFY errValueChanged)
    Q_PROPERTY(QVector<int> tempValue READ getTempValue WRITE setTempValue NOTIFY tempValueChanged)
    Q_PROPERTY(QVariantMap crawlStatus READ getCrawlStatus WRITE setCrawlStatus NOTIFY crawlStatusChanged)
    Q_PROPERTY(float waterLevel READ getWaterLevel WRITE setWaterLevel NOTIFY waterlevelValueChanged)




    // priyanshu
    Q_PROPERTY(int pause_treeValue READ getpause_treeValue WRITE setpause_treeValue NOTIFY pause_treeValueChanged)


    // Velocity
    Q_PROPERTY(int velocityValue READ getVelocityValue WRITE setVelocityValue NOTIFY velocityValueChanged)
    Q_PROPERTY(int odomValue READ getodomValue WRITE setodomValue NOTIFY odomValueChanged)
    Q_PROPERTY(int tripValue READ gettripValue WRITE settripValue NOTIFY tripValueChanged)
    Q_PROPERTY(int resetTrip READ getresetTripValue WRITE setresetTripValue NOTIFY resetTripValueChanged)
    // battery
    Q_PROPERTY(float batteryValue READ getBatteryValue WRITE setBatteryValue NOTIFY batteryValueChanged)

    Q_PROPERTY(int angleValue READ getAngleValue WRITE setAngleValue NOTIFY angleValueChanged)

    Q_PROPERTY(int speedsetting READ getspeedsettingValue WRITE setspeedsettingValue NOTIFY speedsettingValueChanged )

    Q_PROPERTY(int anglesetting READ getangularspeedValue WRITE setangularspeedValue NOTIFY angularspeedValueChanged)
    // current
    Q_PROPERTY(float currentValue READ getCurrentValue WRITE setCurrentValue NOTIFY currentValueChanged)
//  Q_PROPERTY(int voltageValue READ getvoltageValue WRITE setvoltageValue NOTIFY voltageValueChanged)

    // unique id
    
    
    Q_PROPERTY(QVector<QString> uid READ getUid WRITE setUid NOTIFY uidChanged)

// priyanshu
    Q_PROPERTY(int pause_treeValue READ getpause_treeValue WRITE setpause_treeValue NOTIFY pause_treeValueChanged)
    // Q_PROPERTY(int emValue READ getemValue WRITE setemValue NOTIFY emValueChanged)
    Q_PROPERTY(int abort_grid_mappingValue READ getabort_grid_mappingValue WRITE setabort_grid_mappingValue NOTIFY abort_grid_mappingValueChanged)
    // Q_PROPERTY(int abort_raster_scanningValue READ getabort_raster_scanningValue WRITE setabort_raster_scanningValue NOTIFY abort_raster_scanningValueChanged)
    Q_PROPERTY(int start_grid_scanningValue READ getstart_grid_scanningValue WRITE setstart_grid_scanningValue NOTIFY start_grid_scanningValueChanged)
    // Q_PROPERTY(int start_raster_scanningValue READ getstart_raster_scanningValue WRITE setstart_raster_scanningValue NOTIFY start_raster_scanningValueChanged)
    //Q_PROPERTY(int grid_scanValue READ getgrid_scanValue WRITE setgrid_scanValue NOTIFY grid_scanValueChanged)
    
    // grid scan
    
    Q_PROPERTY(bool startGridScanValue READ getstartGridScanValue WRITE setstartGridScanValue NOTIFY startGridScanValueChanged)
    Q_PROPERTY(bool stopGridScanValue READ getstopGridScanValue WRITE setstopGridScanValue NOTIFY stopGridScanValueChanged)
    

    // ut_thickness
        Q_PROPERTY(float ut_thicknessValue READ get_ut_thicknessValue WRITE set_ut_thicknessValue NOTIFY ut_thicknessValueChanged)
    // gridnum
    Q_PROPERTY(float gridnumValue READ get_gridnumValue WRITE set_gridnumValue NOTIFY gridnumValueChanged)

    //ut_array
    Q_PROPERTY(QString ut_arrayValue READ getut_arrayValue WRITE setut_arrayValue NOTIFY ut_arrayValueChanged)





        

    
public:
    explicit Publisher(QObject *parent = nullptr);

    ~Publisher();
public slots:
    void initRosThread();
    void on_pushButton_pressed();
    void on_pushButton_2_pressed();

    //communication
    int getComStatus();
    void setComStatus(int value);
    void commCallback(int value);

    QString getposval();
    QString getnegval();

    void setposval(QString value);
    void setnegval(QString value);

    QString getcyclesval();
    void setcyclesval(QString value);


    int getangularspeedValue();
    void setangularspeedValue(int angularspeed);
    void angularspeedCallback(int angularspeed);

    int getspeedsettingValue();
    void setspeedsettingValue(int speedsetting);
    void velstatusCallback(int speedsetting);


    void trig_pause_tree(int val4);
    void pause_treeStatus(int);

    // void trig_em(int val4);
    // void emStatus(int);




    //toggle robot
    bool getToggleValue();
    void setToggleValue(bool flag);
    void toggleCallback(bool flag);

    bool getcameraInitValue();
    void setcameraInitValue(bool k);


    //arm tool
    QString getToolToggle();
    void setToolToggle(QString value);
    int getArmToolStatus();
    void setArmToolStatus(int value);
    void armToolCallback(int arg);

    //Hzl_Slider
    bool getslideCWValue();
    void setslideCWValue(bool k);

    bool getslideCCWValue();
    void setslideCCWValue(bool k);

    bool getspeedIncrease();
    void setspeedIncrease(bool k);

    bool getjoystickonoff();
    bool getabortauto();
    void setjoystickonoff(bool k);
    void setabortauto(bool k);

    bool getspeedDecrease();
    void setspeedDecrease(bool k);

    bool getlacCWValue();
    void setlacCWValue(bool k);

    bool getlacCCWValue();
    void setlacCCWValue(bool k);

    bool getresetTripValue();
    void setresetTripValue(bool k);

    //Water Level
    float getWaterLevel();
    void setWaterLevel(float level);
    bool getStopArmValue();
    void setStopArmValue(bool k);
    void setRstArmValue(bool k);
    bool getRstArmValue();
    QVector<int> getArmStatus();
    void setArmStatus(QVector<int> value);
    void call_arminit(int val);
    void trig_armStatus();
    void rst_arm(int val);
    void armCallback(QVector<int> status);
    void slideCW(bool k);
    void slideCCW(bool k);
    void speedIncrease(bool k);
    void speedDecrease(bool k);
    void joystickonoff(bool k);
    void abortauto(bool k);

    void resetTrip(bool k);

    void cameraInit(bool k);

    void lacCW(bool k);
    void lacCCW(bool k);

    void stopArm(bool k );
    void rstArm(bool k);

    //crawler
    bool getInitCrawlerValue();
    void setInitCrawlerValue(bool k);
    bool getStopCrawlerValue();
    void setStopCrawlerValue(bool k);
    bool getRstCrawlerValue();
    void setRstCrawlerValue(bool k);
    bool getshdCrawlerValue();
    void setshdCrawlerValue(bool k);
    void setstopautoValue(bool k);
    void setinitautoValue(bool k);
    bool getstopautoValue();
    bool getinitautoValue();

    bool getrstwaterlevelValue();
    void setrstwaterlevelValue(bool k);


    QVector<int> getTempValue();
    void setTempValue(QVector<int> value);
    QVector<int> getErrValue();
    void setErrValue(QVector<int> value);


    QVariantMap getCrawlStatus();
    void setCrawlStatus(QVariantMap value);


    void rst_crawler(int val);
    void shd_crawler(int val);
    //void reset_water(int val);

    void call_crawlerinit(int val);

    void call_slidecw(int val);
    void call_slideccw(int val);

    void call_laccw(int val);
    void call_lacccw(int val);

    void call_speedIncrease(int val);
    void call_speedDecrease(int val);
    void call_joystickonoff(int val);
    void call_abortauto(int value);

    void call_resetTrip(int val);
    void call_resetWaterLevel(int val);

    void call_cameraInit(int val);

    void errorCallback(QVector<int> value);
    void tempCallback(QVector<int> value);

    void crawlerCallback(bool frontLeft, bool frontRight, bool backrRight, bool backLeft);

    void initCrawler(bool k);
    void stopCrawler(bool k );
    //-----------------------Auto Mode ----------------------
    void stopautop(bool k);
    void initautop(bool k);
    void rstCrawler(bool k);
    //void shdCrawler(bool k);
    //void rstwaterlevel(bool k);

    //battery
    float getBatteryValue();
    void setBatteryValue(float value);
    void battCallback(float value);
    int getAngleValue();
    void setAngleValue(int value);
    void angleCallbackp(int value);

//    int  getvoltageValue();
//    void setvoltageValue(int value);
//    void voltageCallback(int value);

    //Velocity
     void velCallback(int current_vel_linear);
     int getVelocityValue();
     void setVelocityValue(int value);

     //lac
     void lacCallback(int lac_value);
     int getlacValue();
     void setlacValue(int lac_value);

     //Odometer
     void odomCallback(int current_odom);
     int getodomValue();
     void setodomValue(int current_odom);

     //Tripmeter
     void tripCallback(int current_trip);
     int gettripValue();
     void settripValue(int current_trip);

    //current
    float getCurrentValue();
    void setCurrentValue(int value);
    void currentCallback(int value);

    void waterCallback(float level);





    //unique id
    QVector<QString> getUid();
    void setUid(QVector<QString> value);
    void uidCallback(QVector<QString> value);

    //image
//    void call_capImg(int val);

    //----------------------------------Auto Mode----------------------
    void call_automode(int val);
    void call_stopautomode(int val);
    void call_initautomode(int val);

    int getpause_treeValue();
    void setpause_treeValue(int);

    // int getemValue();
    // void setemValue(int);


    bool getabort_grid_mappingValue();
    void setabort_grid_mappingValue(bool k);

    bool getstart_grid_scanningValue();
    void setstart_grid_scanningValue(bool k);

    // grid scan
    void call_grid_scan(int val);

    //raster scan
    void call_raster_scan(int val); 


    void startGridScan(bool k);
    void setstartGridScanValue(bool k);
    bool getstartGridScanValue();


    void stopGridScan(bool k);
    void setstopGridScanValue(bool k);
    bool getstopGridScanValue();
    //save csv
    void call_save_CSV(int val);

    //ut_thickness
    float get_ut_thicknessValue();
    void set_ut_thicknessValue(float thickness);
    void utThicknessCallback(float thickness);

    // gridnum

    int get_gridnumValue();
    void set_gridnumValue(int gridnum);
    void gridNumSubCallback(int gridnum);


    //ut_array
    QString getut_arrayValue();
    void setut_arrayValue( QString ut_array);

    // save csv
    void saveCSV(int value);

    void utValCallbackSlot(QString ut_array);

    // bot services

    void call_botservice(int val);






signals:
    void message(QString msg);
    void message1(QString msg);
    void value(int value);
    void value2(int value);
    void value3(int value);
    void value4(int value);
    void value5(int value);
    void value6(int value);
    void value7(int value);
    void value8(int value);
    void value9(int value);
    void value10(int value);
    void value11(int value);
    void value12(int value);
    void value13(int value);

    void value44(int val4); 

    void posvalValueChanged(QString value);
    void negvalValueChanged(QString value);
    void cyclesvalValueChanged(QString value);

    void pause_treeValueChanged(QString value);



    void speedsettingValueChanged(int speedsetting);

    void angularspeedValueChanged(int angularspeed);
    //communcation
    void comStatusChanged(int value);

    //toggle robot
    void toggleValueChanged(bool value);

    //arm tool
    void armToolStatusChanged(int value);
    void toolToggleChanged(QString value);

    //arm
    void slideCWValueChanged(bool value);
    void slideCCWValueChanged(bool value);

    void speedIncreaseValueChanged(bool value);
    void speedDecreaseValueChanged(bool value);
    void joystickonoffValueChanged(bool value);
    void abortautoValueChanged(bool value);


    void cameraInitValueChanged(bool value);

    void lacCWValueChanged(bool value);
    void lacCCWValueChanged(bool value);

    void lacValueChanged(int lac_value);


//    void voltageValueChanged(int value);
    void resetTripValueChanged(bool value);

    void rstwaterlevelValueChanged(bool value);
    void rstArmValueChanged(bool value);
    void stopArmValueChanged(bool value);
    void stopautoValueChanged(bool value);
    void initautoValueChanged(bool value);
    void rstArm(int value);
    void trigArmStatusValueChanged();
    void armStatusChanged(QVector<int> status);

    //crawler
    void initCrawlerValueChanged(bool value);
    void stopCrawlerValueChanged(bool value);
    void rstCrawlerValueChanged(bool value);
    void shdCrawlerValueChanged(bool value);
    void errValueChanged(QVector<int> value);
    void tempValueChanged(QVector<int> value);
    void rstCrawler(int value);
    void shdCrawler(int value);
    void rstWaterLevel(int value);
    void crawlStatusChanged(QVariantMap status);

    void velocityValueChanged(int value);
    void odomValueChanged(int current_odom);
    void tripValueChanged(int current_trip);

    void waterlevelValueChanged(float level);

    //battery
    void batteryValueChanged(float value);

    void angleValueChanged(int value);

    //current
    void currentValueChanged(int value);


    //unique id
    void uidChanged(QVector<QString> value);

    //image capture
    //    void capImg(int value);

    //-------------------AUTO MODE------------------------------
    void initautoSrvp(int value);
    void automode(int value);
    void stopautoSrvp(int value);


    // void value49(int val4); 
    //     void emValueChanged(QString value);

    void abort_grid_mappingValueChanged(bool value);
    void start_grid_scanningValueChanged(bool value);
//  gRID SCAN 
    void value99(int value);
	//void startGridScan(bool k);	

    void startGridScanValueChanged(bool value);
    void stopGridScanValueChanged(bool value);

    // csv
    void value98(int value);


    // ut_thickness
    void ut_thicknessValueChanged(float thickness);

    // gridnum
    void gridnumValueChanged(int gridnum);

    //ut_array
    void ut_arrayValueChanged(QString ut_array);

    void utValCallbackSignal(QString ut_array);

    // raster scan 
    void value97(int value);

    // botservicesignal
    void botServiceSignal(int val);




public :
    std::vector<float> queue;
    int front;
    int rear;
    int size;
    int capacity;

    void enqueue(float value , std::vector<float> queue) ;
    void printQueue();
    bool isEmpty();
    int peek();
    void clear() ;
    void resize(int new_capacity);
    QString convertVectorToQString(const std::vector<float>& vec);






private:
    RosThread *rost;
    QCustomPlot*  m_CustomPlot;
    bool m_toggleValue;
    bool m_slideCW;
    bool m_slideCCW;
    bool m_lacCW;
    bool m_lacCCW;
    bool m_speedIncrease;
    bool m_speedDecrease;
    bool m_joystickonoff;
    bool m_abortauto;
    bool m_rstArmValue;
    bool m_stopArmValue;
    bool m_initCrawlerValue;
    bool m_stopCrawlerValue;
    bool m_rstCrawlerValue;
    bool m_shdCrawlerValue;
    bool m_initautoValue;
    bool m_stopautoValue;
    bool m_rstwaterlevelValue;
    bool m_cameraInit;
    int m_comStatus;
    int m_armToolStatus;
    int m_velocityValue;
    float m_batteryValue;
    int m_currentValue;
    float m_waterValue;
    int m_odom;
    int m_trip;
    int m_tripReset;
    int m_lacValue;
    int m_speedsettingvalue;
    int m_anglesettingvalue;
    int m_angleValue;
    bool m_pause_treeValue;

    // bool m_emValue;
    bool m_abort_grid_mappingValue;
    bool m_start_grid_scanningrValue;
    //bool m_grid_scanValue;
     
    // grid scan 
    bool m_startGridScanValue;
    bool m_stopGridScanValue;


    // csv file 

    void exportToCSV(const std::vector<std::vector<std::string>>& table, const std::string& filename) ;
    //void saveCSV();

    //ut_thickness
    float m_ut_thickness;
    // gridnum
	int m_gridnumValue;
    // void it()
    QString m_toolToggle;
    QString m_utData;
    QString m_posval;
    QString m_negval;
 	QString m_cyclesval;   

    QVariantMap m_crawlStatus;

//    QVariantMap m_utStatus;
//    QVariantMap m_thickness;

    QVector<int> m_armStatus;
    QVector<int> m_errValue;
    QVector<int> m_tempValue;
    QVector<QString> m_uidValue;
    QString m_ut_array;

    std::vector<std::vector<float>> vec;
    int i_ut_index ;
    int j_ut_index  ;
    void saveCSVAuto(std::vector<std::vector<float>> vec);



    


};
#endif // PUBLISHER_H
