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
Publisher::Publisher(QObject *parent)
    : QObject(parent)
{
    qDebug() << "MainWindow constructor";
    m_batteryValue = 46;
    m_comStatus = 0;
    m_armToolStatus = 0;
    m_toggleValue = false;
    m_slideCW = 0;
    m_slideCCW = 0;
    m_lacCCW = 0;
    m_lacCW = 0;
    m_rstArmValue = 0 ;
    m_stopArmValue= 0 ;
    m_initCrawlerValue= 0;
    m_stopCrawlerValue=0;
    m_rstCrawlerValue=0;
    m_currentValue=0.0;
    m_velocityValue=0;
    m_odom = 0;
    m_lacValue=0;
    m_trip = 0;
    m_tripReset = 0;
    m_waterValue = 100.00;
    m_armStatus = {0,0,0,0,0,0,0,0};
    m_voltage = 0;
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

    connect(this->rost,SIGNAL(voltageCallback(int)),this,SLOT(voltageCallback(int)));
    connect(this->rost, SIGNAL(slideCW(bool)), this, SLOT(slideCW(bool)));
    connect(this->rost,SIGNAL(slideCCW(bool)),this,SLOT(slideCCW(bool)));
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
    connect(this->rost, SIGNAL(velCallback(int)), this, SLOT(velCallback(int)));
    connect(this->rost, SIGNAL(odomCallback(int)), this, SLOT(odomCallback(int)));
    connect(this->rost, SIGNAL(tripCallback(int)), this, SLOT(tripCallback(int)));
    connect(this->rost, SIGNAL(crawlerCallback(bool, bool,bool,bool)), this, SLOT(crawlerCallback(bool, bool,bool,bool)));
    connect(this->rost, SIGNAL(errorCallback(QVector<int>)), this, SLOT(errorCallback(QVector<int>)));
    connect(this->rost, SIGNAL(tempCallback(QVector<int>)), this, SLOT(tempCallback(QVector<int>)));
    connect(this, SIGNAL(rstCrawler(int)), this->rost, SLOT(reset_crawler(int)));

    connect(this, SIGNAL(value2(int)), this->rost, SLOT(crawlerInitSrv(int)));
    connect(this,SIGNAL(value3(int)),this->rost,SLOT(slideCW(int)));
    connect (this,SIGNAL(value4(int)),this->rost,SLOT(slideCCW(int)));
    connect(this,SIGNAL(value5(int)),this->rost,SLOT(lacCW(int)));
    connect(this,SIGNAL(value6(int)),this->rost,SLOT(lacCCW(int)));
    connect(this,SIGNAL(value7(int)),this->rost,SLOT(resetTrip(int)));

    // battery
    connect(this->rost, SIGNAL(battCallback(float)), this, SLOT(battCallback(float)));

    // current
    connect(this->rost, SIGNAL(currentCallback(float)), this, SLOT(currentCallback(float)));

    connect(this->rost, SIGNAL(waterCallback(float)),this ,SLOT(waterCallback(float)));

    // ut gauge
    connect(this, SIGNAL(utVelChanged(QString)), this->rost, SLOT(sendUtVel(QString)));
    connect(this, SIGNAL(utDataChanged(QString)), this->rost, SLOT(sendUtData(QString)));
    connect(this->rost, SIGNAL(utCallback(int, int, int)), this, SLOT(utCallback(int, int, int)));
    connect(this->rost,SIGNAL(thicknessCallback(float, float)), this , SLOT(thicknessCallback(float, float)));

    // unique id
    connect(this->rost, SIGNAL(uidCallback(QVector<QString>)), this, SLOT(uidCallback(QVector<QString>)));

    //image capture
    connect(this, SIGNAL(capImg(int)), this->rost, SLOT(capImgPub(int)));

    //////////////

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

//-----------------------------Voltage-------------------------------------------

int Publisher::getvoltageValue()
{
    return m_voltage;
}

void Publisher::setvoltageValue(int value)
{
    m_voltage = value;
    emit voltageValueChanged(value);
}

void Publisher::voltageCallback(int value)
{
    setvoltageValue(value);
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


void Publisher::errorCallback(QVector<int> value)
{
    setErrValue(value);
}
void Publisher::tempCallback(QVector<int> value)
{
    setTempValue(value);
}


void Publisher::crawlerCallback(bool frontLeft, bool frontRight, bool backrRight, bool backLeft)
{
    qDebug() << Q_FUNC_INFO << "frontLeft :" << frontLeft << "frontRight :" << frontRight << "backrRight :" << backrRight << "backLeft :" << backLeft;
    QVariantMap crawlerCallback;
    crawlerCallback.insert("frontLeft", frontLeft);
    crawlerCallback.insert("frontRight", frontRight);
    crawlerCallback.insert("backrRight", backrRight);
    crawlerCallback.insert("backLeft", backLeft);
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

// current
void Publisher::currentCallback(float value)
{
    setCurrentValue(value);
}


float Publisher::getCurrentValue()
{
    return m_currentValue;
}


void Publisher::setCurrentValue(float value)
{
    m_currentValue = value;
    emit currentValueChanged(value);
}

// --------------------------ut gauge--------------------------
QVariantMap Publisher::getUtstatus()
{
    return m_utStatus;
}
void Publisher::setUtstatus(QVariantMap value)
{
    m_utStatus = value;
    emit utstatusChanged(value);
}

void Publisher::utCallback(int vel, int deepcoat, int echo)
{
    QVariantMap utstatus;
    utstatus.insert("vel", vel);
    utstatus.insert("deepcoat", deepcoat);
    utstatus.insert("echo", echo);
    setUtstatus(utstatus);
}
void Publisher::thicknessCallback(float thickness, float unit)
{
    QVariantMap thicknessCallback;
    thicknessCallback.insert("thickness",thickness);
    thicknessCallback.insert("unit",unit);
    setThickness(thicknessCallback);
}
void Publisher::setThickness(QVariantMap value)
{
    m_thickness = value;
    emit thicknessChanged(m_thickness);
}
QVariantMap Publisher::getThickness()
{
    return m_thickness;
}
QString Publisher::getUtVel()
{
    return m_utVel;
}
void Publisher::setUtVel(QString value)
{
    m_utVel = value;
    emit utVelChanged(value);
}

QString Publisher::getUtData()
{
    return m_utData;
}
void Publisher::setUtData(QString value)
{

    m_utData = value;
    emit utDataChanged(value);
}



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


//--------------------------image capture--------------------------
void Publisher::call_capImg(int val)
{
    emit capImg(val);
}

//////////////


