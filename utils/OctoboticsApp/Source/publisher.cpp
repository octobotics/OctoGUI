/*!
 *  \file      publisher.cpp
 *  \brief     Connects ros data with qt.
 *  \details   This class acts as a mediator between ros node and our qml page. It coverts data, notifies any changes in data from both UI and ros node.
 *  \authors   Venkat, Charith Reddy
 *  \copyright Copyright (C) 2022 Octobotics Tech Pvt. Ltd. All Rights Reserved.
                Do not remove this copyright notice.
                Do not use, reuse, copy, merge, publish, sub-license, sell, distribute or modify this code - except without explicit,
                written permission from Octobotics Tech Pvt. Ltd.
                Contact connect@octobotics.tech for full license information.

 *  \todo      Remove extra connections used for arm and crawler. Make it more efficient (eg: using separate connections for crawler error and temp)
 *  \warning   Improper use can crash the application
 */


#pragma once
#include "qquickitem.h"
#include <math.h>
#include <string.h>
#include "publisher.h"

/*!
 * \brief Publisher::Publisher: constructor: initalizes variables
 * \param parent
 */
Publisher::Publisher(QObject *parent )
    : QObject(parent)
{
    qDebug() << "MainWindow constructor";
    m_batteryValue = 40;
    m_comStatus = 0;
    m_armToolStatus = 0;
    m_toggleValue = false;
    m_slideCW = 0;
    m_slideCCW = 0;
    m_speedIncrease = 0;
    m_speedDecrease = 0;
    m_joystickonoff = 0;
    m_abortauto = 0;
    m_lacCCW = 0;
    m_lacCW = 0;
    m_rstArmValue = 0 ;
    m_stopArmValue= 0 ;
    m_initCrawlerValue = 0;
    m_stopCrawlerValue =0;
    m_rstCrawlerValue = 0;
    m_shdCrawlerValue = 0;
    m_stopautoValue = 0;
    m_rstwaterlevelValue = 0;
    m_currentValue=0;
    m_velocityValue=0;
    m_odom = 0;
    m_lacValue=0;
    m_trip = 0;
    m_tripReset = 0;
    m_waterValue = 100.00;
    m_armStatus = {0,0,0,0,0,0,0,0};
    m_speedsettingvalue = 0;
    m_cameraInit = 0;
    m_anglesettingvalue=0;
    m_angleValue = 0;

    m_pause_treeValue = 0;
    // m_emValue = 0; 
    m_abort_grid_mappingValue = 0;
    m_start_grid_scanningrValue = 0;

    m_startGridScanValue = 0;
    m_stopGridScanValue = 0;
    
    //ut_thickness
    m_ut_thickness = 0;
    //gridnum
    m_gridnumValue = 0;

    //ut value 
    m_ut_array  = "";

    
    front = 0;
    rear = 0;
    size = 0;
    capacity = 144;
    
    




}

/*!
 * \brief Publisher::~Publisher destructor
 */
Publisher::~Publisher()
{
    delete this->rost;
}

/*!
 * \brief Publisher::initRosThread: initlalizes ros thread and makes connections between ros thread and UI
 */
void Publisher::initRosThread()
{
    // Create RosThread
    this->rost = new RosThread();

    ////////////////////
    connect(this, SIGNAL(message(QString)), this->rost, SLOT(addLine(QString)));
    connect(this, SIGNAL(message1(QString)), this->rost, SLOT(addLine(QString)));

    // communication
    connect(this->rost, SIGNAL(commCallback(int)), this, SLOT(commCallback(int)));

    // crawler arm toggle status
    connect(this->rost, SIGNAL(toggleCallback(bool)), this, SLOT(toggleCallback(bool)));

    // arm tool
    connect(this, SIGNAL(toolToggleChanged(QString)), this->rost, SLOT(sendToolData(QString)));
    connect(this->rost, SIGNAL(armToolCallback(int)), this, SLOT(armToolCallback(int)));

    // arm
//    connect(this, SIGNAL(value(int)), this->rost, SLOT(armInitSrv(int)));
    connect(this, SIGNAL(rstArm(int)), this->rost, SLOT(reset_arm(int)));
    connect(this, SIGNAL(trigArmStatusValueChanged()), this->rost, SLOT(checkArmStatus()));

    connect(this->rost,SIGNAL(velstatusCallback(int)),this,SLOT(velstatusCallback(int)));

    connect(this->rost,SIGNAL(angularspeedCallback(int)),this,SLOT(angularspeedCallback(int)));

    connect(this->rost, SIGNAL(slideCW(bool)), this, SLOT(slideCW(bool)));
    connect(this->rost,SIGNAL(slideCCW(bool)),this,SLOT(slideCCW(bool)));

    connect(this->rost,SIGNAL(speedIncrease(bool)),this, SLOT(speedIncrease(bool)));
    connect(this->rost,SIGNAL(speedDecrease(bool)),this,SLOT(speedDecrease(bool)));

    connect(this->rost,SIGNAL(joystickonoffb(bool)),this,SLOT(joystickonoff(bool)));
     connect(this->rost,SIGNAL(abortautob(bool)),this,SLOT(abortauto(bool)));


    connect(this->rost,SIGNAL(cameraInit(bool k)),this,SLOT(cameraInit(bool k)));
    connect(this->rost,SIGNAL(lacCW(bool)),this,SLOT(lacCW(bool)));
    connect(this->rost,SIGNAL(lacCCW(bool)),this,SLOT(lacCCW(bool)));
    connect(this->rost,SIGNAL(lacCallback(int)),this, SLOT(lacCallback(int)));
    connect(this->rost,SIGNAL(resetTrip(bool k)),this,SLOT(resetTrip(bool)));
    connect(this->rost, SIGNAL(rstArm(bool)), this, SLOT(rstArm(bool)));
    connect(this->rost, SIGNAL(stopArm(bool)), this, SLOT(stopArm(bool)));
    connect(this->rost, SIGNAL(armCallback(QVector<int>)), this, SLOT(armCallback(QVector<int>)));

    // crawler
    connect(this->rost, SIGNAL(initCrawler(bool)), this, SLOT(initCrawler(bool)));
    connect(this->rost, SIGNAL(stopCrawler(bool)), this, SLOT(stopCrawler(bool)));
    connect(this->rost, SIGNAL(rstCrawler(bool)), this, SLOT(rstCrawler(bool)));
    connect(this->rost, SIGNAL(shdCrawler(bool)),this, SLOT(shdCrawler(bool)));
    connect(this->rost, SIGNAL(stopauto(bool)), this, SLOT(stopautop(bool)));
    connect(this->rost, SIGNAL(initauto(bool)),this,SLOT(initautop(bool)));
    connect(this->rost, SIGNAL(rstwaterlevel(bool)),this,SLOT(rstwaterlevel(bool)));
    connect(this->rost, SIGNAL(velCallback(int)), this, SLOT(velCallback(int)));
    connect(this->rost, SIGNAL(odomCallback(int)), this, SLOT(odomCallback(int)));
    connect(this->rost, SIGNAL(tripCallback(int)), this, SLOT(tripCallback(int)));
    connect(this->rost, SIGNAL(crawlerCallback(bool,bool,bool,bool)), this, SLOT(crawlerCallback(bool,bool,bool,bool)));
    connect(this->rost, SIGNAL(errorCallback(QVector<int>)), this, SLOT(errorCallback(QVector<int>)));
    connect(this->rost, SIGNAL(tempCallback(QVector<int>)), this, SLOT(tempCallback(QVector<int>)));
    connect(this, SIGNAL(rstCrawler(int)), this->rost, SLOT(reset_crawler(int)));
    connect(this,SIGNAL(shdCrawler(int)),this->rost, SLOT(shutdown_crawler(int)));
    //------------------AUTO MODE---------------------------------------------
    connect(this,SIGNAL(stopautoSrvp(int)),this->rost, SLOT(stopautoSrv(int)));
    connect(this,SIGNAL(initautoSrvp(int)),this->rost,SLOT(initautoSrv(int)));
    connect(this,SIGNAL(rstWaterLevel(int)),this->rost,SLOT(reset_water(int)));

    connect(this, SIGNAL(value2(int)), this->rost, SLOT(crawlerInitSrv(int)));
    connect(this,SIGNAL(value3(int)),this->rost,SLOT(slideCW(int)));
    connect (this,SIGNAL(value4(int)),this->rost,SLOT(slideCCW(int)));
    connect(this,SIGNAL(value5(int)),this->rost,SLOT(lacCW(int)));
    connect(this,SIGNAL(value6(int)),this->rost,SLOT(lacCCW(int)));
    connect(this,SIGNAL(value7(int)),this->rost,SLOT(resetTrip(int)));
    connect(this,SIGNAL(value8(int)),this->rost,SLOT(cameraInit(int)));
    connect(this,SIGNAL(value9(int)),this->rost,SLOT(speedIncrease(int)));
    connect(this,SIGNAL(value10(int)),this->rost,SLOT(speedDecrease(int)));
    connect(this,SIGNAL(value11(int)),this->rost,SLOT(reset_water(int)));
    connect(this,SIGNAL(value12(int)),this->rost,SLOT(joystickonoff(int)));
    connect(this,SIGNAL(value13(int)),this->rost,SLOT(abort(int)));



    connect(this,SIGNAL(posvalValueChanged(QString)),this->rost,SLOT(pos_angle(QString)));
    connect(this,SIGNAL(negvalValueChanged(QString)),this->rost,SLOT(neg_angle(QString)));

    connect(this,SIGNAL(cyclesvalValueChanged(QString)),this->rost,SLOT(cycles_val(QString)));

    // battery
    connect(this->rost, SIGNAL(battCallback(float)), this, SLOT(battCallback(float)));

    connect(this->rost,SIGNAL(angleCallback(int)),this , SLOT(angleCallbackp(int)));

    // current
    connect(this->rost, SIGNAL(currentCallback(int)), this, SLOT(currentCallback(int)));

    connect(this->rost, SIGNAL(waterCallback(float)),this ,SLOT(waterCallback(float)));



    // unique id
    connect(this->rost, SIGNAL(uidCallback(QVector<QString>)), this, SLOT(uidCallback(QVector<QString>)));

    //image capture
//    connect(this, SIGNAL(capImg(int)), this->rost, SLOT(capImgPub(int)));

    connect(this,SIGNAL(automode(int)),this->rost,SLOT(automodePub(int)));

    //////////////

    connect(this, SIGNAL(value44(int)), this->rost, SLOT(pause_treeSrv(int)));
    connect(this->rost, SIGNAL(pause_treeStatus(bool)), this, SLOT(pause_treeStatus(bool)));



    // connect(this, SIGNAL(value49(int)), this->rost, SLOT(emSrv(int)));
    // connect(this->rost, SIGNAL(emStatus(bool)), this, SLOT(emStatus(bool)));
    // grid scan
    connect(this, SIGNAL(value99(int)), this->rost, SLOT(gridScanSrv(int)));


    connect(this->rost, SIGNAL(startGridScan(bool)), this, SLOT(startGridScan(bool)));
    connect(this->rost, SIGNAL(stopGridScan(bool)), this, SLOT(stopGridScan(bool)));


    connect(this, SIGNAL(value98(int)), this, SLOT(saveCSV(int)));

    //ut_thickness
    connect(this->rost, SIGNAL(utThicknessCallback(float)), this, SLOT(utThicknessCallback(float)));

    //gridnum
        connect(this->rost, SIGNAL(gridNumSubCallback(int)), this, SLOT(gridNumSubCallback(int)));


    connect(this, SIGNAL(utValCallbackSignal(QString)), this, SLOT(utValCallbackSlot(QString)));
    connect(this, SIGNAL(value97(int)), this->rost, SLOT(rasterScanSrv(int)));

    // botservice 
    connect(this, SIGNAL(botServiceSignal(int)), this->rost, SLOT(botServiceSlotSrv(int)));

    

    this->rost->start();
}

////////////////////

//---------------------------utils---------------------------
void Publisher::on_pushButton_pressed()
{
    emit message("1223");
}
void Publisher::on_pushButton_2_pressed()
{
    emit message1("122344");
}



//---------------------------communication---------------------------

int Publisher::getComStatus()
{
    return m_comStatus;
}
void Publisher::setComStatus(int value)
{
    m_comStatus = value;
    emit comStatusChanged(value);
}
void Publisher::commCallback(int value)
{
    setComStatus(value);
}

void Publisher::call_automode(int val)
{
    emit automode(val);
}

//-------------------------AUTO MODE------------------------

void Publisher::call_initautomode(int val)
{
    emit initautoSrvp(val);
}

void Publisher::call_stopautomode(int val)
{
    emit stopautoSrvp(val);
}


//---------------------------- Water Level -------------------------------

float Publisher::getWaterLevel()
{
    return m_waterValue;

}
void Publisher::setWaterLevel(float level)
{
   m_waterValue = level ;
   emit waterlevelValueChanged(level);
}

void Publisher::waterCallback(float level)
{
    setWaterLevel(level);

}

//----------------------------Speed Increase And Decrease ------------------

bool Publisher::getspeedIncrease()
{
    return m_speedIncrease;
}

void Publisher::setspeedIncrease(bool value)
{
    m_speedIncrease = value;
    emit speedIncreaseValueChanged(value);
}

bool Publisher::getspeedDecrease()
{
    return m_speedDecrease;
}

void Publisher::setspeedDecrease(bool value)
{
    m_speedDecrease = value;
    emit speedDecreaseValueChanged(value);
}

//-------------------------------Joystick One and OFF ----------------------------

bool Publisher::getjoystickonoff()

{
    return m_joystickonoff;
}

void Publisher::setjoystickonoff(bool value)
{
    m_joystickonoff = value;
    emit joystickonoffValueChanged(value);
}


//----------------------------Abort Auto-------------------------------------------

bool Publisher::getabortauto()
{
    return m_abortauto;
}

void Publisher::setabortauto(bool value)
{
    m_abortauto = value;
    emit abortautoValueChanged(value);
}
//-----------------------------Linear and Angular Speed-------------------------------------------

int Publisher::getspeedsettingValue()
{
    return m_speedsettingvalue;
}

void Publisher::setspeedsettingValue(int speedsetting)
{
    m_speedsettingvalue = speedsetting;
    emit speedsettingValueChanged(speedsetting);
}

void Publisher::velstatusCallback(int speedsetting)
{
    setspeedsettingValue(speedsetting);
}

int Publisher::getangularspeedValue()
{
    return m_anglesettingvalue;
}

void Publisher::setangularspeedValue(int angularspeed)
{
    m_anglesettingvalue = angularspeed;
    emit angularspeedValueChanged(angularspeed);
}

void Publisher::angularspeedCallback(int angularspeed)
{
    setangularspeedValue(angularspeed);
}

// ---------------------------crawler arm toggle status---------------------------
bool Publisher::getToggleValue()
{
    return m_toggleValue;
}
void Publisher::setToggleValue(bool flag)
{
    m_toggleValue = flag;
    emit toggleValueChanged(flag);
}

void Publisher::toggleCallback(bool flag)
{
    setToggleValue(flag);
}

// ---------------------------arm tool---------------------------


int Publisher::getArmToolStatus()
{
    return m_armToolStatus;
}
void Publisher::setArmToolStatus(int value)
{
    m_armToolStatus = value;
    emit armToolStatusChanged(value);
}



QString Publisher::getToolToggle()
{
    return m_toolToggle;
}
void Publisher::setToolToggle(QString value)
{

    m_toolToggle = value;
    emit toolToggleChanged(value);
}

void Publisher::armToolCallback(int arg)
{
    setArmToolStatus(arg);
}

// ---------------------------arm---------------------------


bool Publisher::getslideCWValue()
{
    return m_slideCW;
}
void Publisher::setslideCWValue(bool flag)
{
    m_slideCW = flag;
    emit slideCWValueChanged(flag);
}

bool Publisher::getslideCCWValue()
{
    return m_slideCCW;
}

void Publisher::setslideCCWValue(bool flag)
{
    m_slideCCW = flag;
    emit slideCCWValueChanged(flag);
}

bool Publisher::getlacCWValue()
{
    return m_lacCW;
}
void Publisher::setlacCWValue(bool flag)
{
    m_lacCW = flag;
    emit lacCWValueChanged(flag);

}

bool Publisher::getlacCCWValue()
{
    return m_lacCCW;
}
void Publisher::setlacCCWValue(bool flag)
{
    m_lacCCW = flag;
    emit lacCCWValueChanged(flag);

}

bool Publisher::getresetTripValue()
{
    return m_tripReset;
}
void Publisher::setresetTripValue(bool flag)
{
    m_tripReset = flag;
    emit resetTripValueChanged(flag);
}


bool Publisher::getStopArmValue()
{
    return m_stopArmValue;
}
void Publisher::setStopArmValue(bool flag)
{
    m_stopArmValue = flag;
    emit stopArmValueChanged(flag);
}


bool Publisher::getRstArmValue()
{
    return m_rstArmValue;
}
void Publisher::setRstArmValue(bool flag)
{
    m_rstArmValue = flag;
    emit rstArmValueChanged(flag);
}



QVector<int> Publisher::getArmStatus()
{
    return m_armStatus;
}
void Publisher::setArmStatus(QVector<int> value)
{
    m_armStatus = value;
    emit armStatusChanged(m_armStatus);
}


QString Publisher::getposval()
{
    return m_posval;
}

QString Publisher::getnegval()
{
    return m_negval;
}
QString Publisher::getcyclesval()
{
    return m_cyclesval;
}





void Publisher::setposval(QString value)
{
    m_posval = value;
    emit posvalValueChanged(value);
}

void Publisher::setnegval(QString value)
{
    m_negval = value;
    emit negvalValueChanged(value);
}

void Publisher::setcyclesval(QString value)
{
    m_cyclesval = value;
     bool ok =  false; 
    size  = m_cyclesval.toInt(&ok);

   queue.resize(size*size);
   fill(queue.begin(), queue.end(), 0.0f);

   
   emit cyclesvalValueChanged(value);
}



void Publisher::call_arminit(int val)
{
    emit value(val);
}
void Publisher::trig_armStatus()
{
    emit trigArmStatusValueChanged();
}

void Publisher::rst_arm(int val)
{
    emit rstArm(val);
}
void Publisher::armCallback(QVector<int> status)
{
    setArmStatus(status);
}

void Publisher::resetTrip(bool flag)
{
    setresetTripValue(flag);
}

void Publisher::slideCW(bool flag)
{
    setslideCWValue(flag);
}

void Publisher::slideCCW(bool flag)
{
    setslideCCWValue(flag);
}

void Publisher::speedIncrease(bool flag)
{
    setspeedIncrease(flag);
}

void Publisher::speedDecrease(bool flag)
{
    setspeedDecrease(flag);
}

void Publisher::joystickonoff(bool flag)
{
    setjoystickonoff(flag);
}

void Publisher::abortauto(bool flag)
{
    setabortauto(flag);
}

void Publisher::lacCW(bool flag)
{
    setlacCWValue(flag);
}

void Publisher::lacCCW(bool flag)
{
    setlacCCWValue(flag);
}

void Publisher::stopArm(bool flag)
{
    setStopArmValue(flag);
}
void Publisher::rstArm(bool flag)
{
    setRstArmValue(flag);
}




//  --------------------------crawler--------------------------


bool Publisher::getInitCrawlerValue()
{
    return m_initCrawlerValue;
}
void Publisher::setInitCrawlerValue(bool flag)
{
    m_initCrawlerValue = flag;
    emit initCrawlerValueChanged(flag);
}

bool Publisher::getrstwaterlevelValue()
{
    return m_rstwaterlevelValue;
}
void Publisher::setrstwaterlevelValue(bool value)
{
    m_rstwaterlevelValue = value;
    emit rstwaterlevelValueChanged(value);
}


bool Publisher::getStopCrawlerValue()
{
    return m_stopCrawlerValue;
}
void Publisher::setStopCrawlerValue(bool flag)
{
    m_stopCrawlerValue = flag;
    emit stopCrawlerValueChanged(flag);
}


bool Publisher::getRstCrawlerValue()
{
    return m_rstCrawlerValue;
}
void Publisher::setRstCrawlerValue(bool flag)
{
    m_rstCrawlerValue = flag;
    emit rstCrawlerValueChanged(flag);
}

void Publisher::setstopautoValue(bool flag)
{
    m_stopautoValue = flag;
    emit stopautoValueChanged(flag);
}

void Publisher::setinitautoValue(bool flag )
{
    m_initautoValue = flag;
    emit initautoValueChanged(flag);

}

bool Publisher::getstopautoValue()
{
    return m_stopautoValue;
}

bool Publisher::getinitautoValue()
{
    return m_initautoValue;
}

bool Publisher::getshdCrawlerValue()
{
    return m_shdCrawlerValue;
}
void Publisher::setshdCrawlerValue(bool flag)
{
    m_shdCrawlerValue = flag;
    emit shdCrawlerValueChanged(flag);
}

QVector<int> Publisher::getTempValue()
{
    return m_tempValue;
}

void Publisher::setTempValue(QVector<int> value)
{
    m_tempValue = value;
    emit tempValueChanged(value);
}
QVector<int> Publisher::getErrValue()
{
    return m_errValue;
}


void Publisher::setErrValue(QVector<int> value)
{
    m_errValue = value;
    emit errValueChanged(value);
}
//-----------------------Velocity--------------------------
int Publisher::getVelocityValue()
{
    return m_velocityValue;
}
void Publisher::setVelocityValue(int value)
{
    m_velocityValue = value;
    emit velocityValueChanged(value);
}
void Publisher::velCallback(int current_vel_linear)
{

    setVelocityValue(current_vel_linear);
}

//-----------------------CAMERA-------------------------------

bool Publisher::getcameraInitValue()
{
    return m_cameraInit;
}

void Publisher::setcameraInitValue(bool k)
{
    m_cameraInit = k;
    emit cameraInitValueChanged(k);
}



//-----------------------lac Value----------

int Publisher::getlacValue()
{
    return m_lacValue;
}

void Publisher::setlacValue(int lac_value)
{
    m_lacValue = lac_value;
    emit lacValueChanged(lac_value);
}
void Publisher::lacCallback(int lac_value)
{
    setlacValue(lac_value);
}

//----------------------ODOMETER---------------------------
int Publisher::getodomValue()
{
    return m_odom;
}
void Publisher::setodomValue(int current_odom)
{
    m_odom = current_odom;
    emit odomValueChanged(current_odom);
}
void Publisher::odomCallback(int current_odom)
{
    setodomValue(current_odom);
}

//----------------------TRIPMETER---------------------------
int Publisher::gettripValue()
{
    return m_trip;
}
void Publisher::settripValue(int current_odom)
{
    m_trip = current_odom;
    emit tripValueChanged(current_odom);
}
void Publisher::tripCallback(int current_odom)
{
    settripValue(current_odom);

}

//----------------------------------------------------------
QVariantMap Publisher::getCrawlStatus()
{
    return m_crawlStatus;
}
void Publisher::setCrawlStatus(QVariantMap value)
{
    m_crawlStatus = value;
    emit crawlStatusChanged(value);
}

void Publisher::shd_crawler(int val)
{
    emit shdCrawler(val);
}



void Publisher::rst_crawler(int val)
{    emit rstCrawler(val);
}
void Publisher::call_crawlerinit(int val)
{    emit value2(val);
}
void Publisher::call_slidecw(int val)
{
    emit value3(val);
}
void Publisher::call_slideccw(int val)
{
    emit value4(val);
}

void Publisher::call_laccw(int val)
{
    emit value5(val);
}

void Publisher::call_lacccw(int val)
{
    emit value6(val);
}

void Publisher::call_resetTrip(int val)
{
    emit value7(val);
}

void Publisher::call_cameraInit(int val)
{
    emit value8(val);
}

void Publisher::call_speedIncrease(int val)
{
    emit value9(val);
}

void Publisher::call_speedDecrease(int val)
{
    emit value10(val);
}

void Publisher::call_resetWaterLevel(int val)
{
    emit value11(val);
}

void Publisher::call_joystickonoff(int val)
{
    emit value12(val);
}

void Publisher::call_abortauto(int val)
{
    emit value13(val);
}

void Publisher::errorCallback(QVector<int> value)
{

    setErrValue(value);
//    qDebug()<< Q_FUNC_INFO << value;
}
void Publisher::tempCallback(QVector<int> value)
{
    setTempValue(value);
}


void Publisher::crawlerCallback(bool frontLeft, bool frontRight, bool backrRight, bool backLeft)
{
//    qDebug() << Q_FUNC_INFO << "frontLeft :" << frontLeft << "frontRight :" << frontRight << "backrRight :" << backrRight << "backLeft :" << backLeft;
    QVariantMap crawlerCallback;
    crawlerCallback.insert("frontLeft", frontLeft);
    crawlerCallback.insert("frontRight", frontRight);
    crawlerCallback.insert("backrRight", backrRight);
    crawlerCallback.insert("backLeft", backLeft);
//    qDebug()<<Q_FUNC_INFO << crawlerCallback;
    setCrawlStatus(crawlerCallback);
}

void Publisher::initCrawler(bool flag)
{
    setInitCrawlerValue(flag);
}


void Publisher::stopCrawler(bool flag)
{
    setStopCrawlerValue(flag);
}




void Publisher::rstCrawler(bool flag)
{
    setRstCrawlerValue(flag);
}

void Publisher::stopautop(bool flag)
{
    setstopautoValue(flag);
}

void Publisher::initautop(bool flag)
{
    setinitautoValue(flag);
}



void Publisher::cameraInit(bool k)
{
    setcameraInitValue(k);
}

// --------------------------battery--------------------------
float Publisher::getBatteryValue()
{
    return m_batteryValue;
}
void Publisher::setBatteryValue(float value)
{
    m_batteryValue = value;
    emit batteryValueChanged(value);
}
void Publisher::battCallback(float value)
{
    setBatteryValue(value);
}

//------------------------ANGLE Inclination------------

void Publisher::angleCallbackp(int value)
{
    setAngleValue(value);
}
int Publisher::getAngleValue()
{
    return m_angleValue;
}
void Publisher::setAngleValue(int value)
{
    m_angleValue = value;
    emit angleValueChanged(value);
}

// current
void Publisher::currentCallback(int value)
{
    setCurrentValue(value);
}


float Publisher::getCurrentValue()
{
    return m_currentValue;
}


void Publisher::setCurrentValue(int value)
{
    m_currentValue = value;
    emit currentValueChanged(value);
}

// --------------------------ut gauge--------------------------










// --------------------------unique id--------------------------
QVector<QString> Publisher::getUid()
{
    return m_uidValue;
}
void Publisher::setUid(QVector<QString> value)
{
    m_uidValue = value;
    emit uidChanged(value);
}

void Publisher::uidCallback(QVector<QString> value)
{
    setUid(value);
}

void Publisher::trig_pause_tree(int val4)
{

    emit value44(val4);
}


void Publisher::pause_treeStatus(int val4)
{
    setpause_treeValue(val4);
}



void Publisher::setpause_treeValue(int val4)
{
    m_pause_treeValue = val4;
    emit pause_treeValueChanged("val4");
}



int Publisher::getpause_treeValue()
{
    return m_pause_treeValue;
}


// void Publisher::trig_em(int val4)
// {

//     emit value49(val4);
// }


// void Publisher::emStatus(int val4)
// {
//     setemValue(val4);
// }

// void Publisher::setemValue(int val4)

// {
//  m_emValue = val4;
//     emit emValueChanged("val4");
    
// }

// int Publisher::getemValue()
// {
//     return m_emValue;
// }



bool Publisher::getabort_grid_mappingValue()
{
    return m_abort_grid_mappingValue;
}
void Publisher::setabort_grid_mappingValue(bool flag)
{
    m_abort_grid_mappingValue = flag;
    emit abort_grid_mappingValueChanged(flag);
}


bool Publisher::getstart_grid_scanningValue()
{
    return m_start_grid_scanningrValue;
}
void Publisher::setstart_grid_scanningValue(bool flag)
{
    m_start_grid_scanningrValue = flag;
    emit start_grid_scanningValueChanged(flag);




}


// Grid scan

void Publisher::call_grid_scan(int val)
{    emit value99(val);
}

void Publisher::startGridScan(bool flag)
{
    setstartGridScanValue(flag);
}


void Publisher::setstartGridScanValue(bool flag)
	{
	    m_startGridScanValue = flag;
	    emit startGridScanValueChanged(flag);
	}


bool Publisher::getstartGridScanValue()
	{
	    return m_startGridScanValue;
	}

void Publisher::stopGridScan(bool flag)
{
    setstopGridScanValue(flag);
}


void Publisher::setstopGridScanValue(bool flag)
	{
        m_stopGridScanValue = flag;
        emit stopGridScanValueChanged(flag);
	}


bool Publisher::getstopGridScanValue()
	{
	    return m_stopGridScanValue;
	}
	

// raster Scan 

void Publisher::call_raster_scan(int val)
{    emit value97(val);
}

void Publisher::call_save_CSV(int val)
{    emit value98(val);
}


//export the csv




void Publisher::exportToCSV(const std::vector<std::vector<std::string>>& table, const std::string& filename) {
    std::ofstream outFile(filename);
    
    // Check if the file is open
    if (!outFile.is_open()) {
        std::cerr << "Error opening file!" << std::endl;
        return;
    }

    // Iterate over each row
    for (size_t i = 0; i < table.size(); ++i) {
        // Iterate over each column in the row
        for (size_t j = 0; j < table[i].size(); ++j) {
            // Write the element, followed by a comma (except for the last element in each row)
            outFile << table[i][j];
            if (j < table[i].size() - 1) {
                outFile << ","; // comma separator between columns
            }
        }
        outFile << "\n"; // Newline after each row
    }

    outFile.close();
    std::cout << "Table exported to " << filename << " successfully!" << std::endl;
}




//ut_thickness

float Publisher::get_ut_thicknessValue()
{
    return m_ut_thickness;
}
void Publisher::set_ut_thicknessValue(float thickness)
{
    m_ut_thickness = thickness;

    emit ut_thicknessValueChanged(thickness);
    int intValue = static_cast<int>(thickness);
    // if (queue.size() == size) {
    //         queue.erase(queue.begin());  // Remove the front element
    //     }
    int m = m_cyclesval.toInt();
    if (queue.size() >0){
       queue.erase(queue.begin());
    }
    queue.push_back(thickness* 1.0f);
    QString utValString = convertVectorToQString(queue);
    utValCallbackSignal(utValString);
    //qDebug()<< intValue;
}

QString Publisher::convertVectorToQString(const std::vector<float>& vec)
{
    QStringList list;

    // Iterate over the vector and convert each element to a QString
    for (float value : vec)
    {
        list.append(QString::number(value, 'f', 2)); // 'f' for fixed-point notation, 2 decimal places
    }

    // Join all elements into a single QString, separated by a space or another delimiter
    return list.join(" "); // You can change the separator if needed
}


void Publisher::utThicknessCallback(float thickness)
	{
		set_ut_thicknessValue(thickness);

        // QString may;
        // may = "jk sa k a d k a s k dl a s kd l a k j d l k a s dj ";
        // utValString = convertVectorToQString(queue);
        // utValCallbackSignal(may);
	}



//gridnum

int Publisher::get_gridnumValue()
	{
		return m_gridnumValue;
	}
	void Publisher::set_gridnumValue(int gridnum)
	{
		m_gridnumValue = gridnum;
		emit gridnumValueChanged(gridnum);
	}



 void Publisher::gridNumSubCallback(int gridnum)
	{

		set_gridnumValue(gridnum);
	}
   


//ut_array

QString Publisher::getut_arrayValue()  {

return m_ut_array;
}

void Publisher::setut_arrayValue( QString ut_array){
m_ut_array = ut_array;
qDebug() << ut_array;
ut_arrayValueChanged(ut_array);
}

void Publisher::utValCallbackSlot(QString ut_array)
{
    setut_arrayValue(ut_array);
}



//--------------------------image capture--------------------------





void Publisher::saveCSV(int value)

{
   int k = value;

    if (k) {
        // Example CSV data (you can replace this with actual data)
             std::vector<std::vector<float>> data;
            bool ok;
            QString row = m_cyclesval;
            int rows = m_cyclesval.toInt(&ok);
            int cols =rows;
                if(cols!=0){
                for (int r = 0; r < rows; ++r) {
                std::vector<float> row(queue.begin() + r * cols, queue.begin() + (r + 1) * cols);
                data.push_back(row);
            }
            


            }
        // Open the file in append mode
            std::ofstream outFile("/home/octo/output.csv", std::ios::app);

            if (outFile.is_open()) {
                // Get the current date and time
                std::time_t currentTime = std::time(nullptr);
                char timeBuffer[100];
                std::strftime(timeBuffer, sizeof(timeBuffer), "%Y-%m-%d %H:%M:%S", std::localtime(&currentTime));

                // Write a timestamp comment at the top of the file
                outFile << "Ut Value saved: " << timeBuffer << "\n";

                // Writing the table data to the CSV file (new data)
                for (const auto& row : data) {
                    for (size_t i = 0; i < row.size(); ++i) {
                        outFile << row[i];
                        if (i < row.size() - 1) {
                            outFile << ","; // Add comma separator
                        }
                    }
                    outFile << "\n"; // Newline after each row
                }

                outFile.close();
                std::cout << "CSV file saved successfully!" << std::endl;
            } 
            else {
                
                std::cout << "j" << std::endl;
            }
    }
}

void Publisher::enqueue(float value , std::vector<float> queue) {
        if (size == capacity) {
            // If the queue is full, remove the front element (overwriting it)
            front = (front + 1) % capacity;
        } else {
            // If the queue is not full, increase the size
            size++;
        }

        // Add the new element at the rear of the queue
        queue[rear] = value;
        rear = (rear + 1) % capacity;  // Circular increment
    }

    // Method to print the current queue
void Publisher::printQueue() {
        std::cout << "Queue contents: ";
        for (int i = 0; i < capacity; i++) {
            std::cout << queue[i] << " ";
        }
        std::cout << std::endl;
    }

  // Method to check if the queue is empty
bool Publisher::isEmpty() {
        return size == 0;
    }

    // Method to check the front element of the queue
int Publisher::peek() {
        if (isEmpty()) {
            std::cout << "Queue is empty!" << std::endl;
            return -1; // Return an invalid value for an empty queue
        }
        return queue[front];
    }

    // Method to clear the queue
void Publisher::clear() {
        size = 0;
        front = 0;
        rear = 0;
        std::fill(queue.begin(), queue.end(), 0); // Fill with zeros
    }

    // Method to resize the queue
void Publisher::resize(int new_capacity) {
        capacity = new_capacity;
        queue.resize(capacity, 0); // Resize and fill new elements with zeros
        clear(); // Reset the state of the queue
    }



void Publisher::call_botservice(int val){
    emit botServiceSignal(val);
}