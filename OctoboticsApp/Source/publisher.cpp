#include "qquickitem.h"
#include <math.h>
#include <string.h>
#include "publisher.h"
Publisher::Publisher(QObject *parent)
    : QObject(parent)
{
    qDebug() << "MainWindow constructor";
    m_batteryValue = 46;
    m_comStatus = 0;
    m_armToolStatus = 0;
    m_toggleValue = false;
    m_initArmValue = 0;
    m_rstArmValue = 0 ;
    m_stopArmValue= 0 ;
    m_initCrawlerValue= 0;
    m_stopCrawlerValue=0;
    m_rstCrawlerValue=0;
    m_armStatus = {0,0,0,0,0,0,0,0};
}
Publisher::~Publisher()
{
    delete this->rost;
}
void Publisher::on_pushButton_pressed()
{
    emit message("1223");
}
void Publisher::on_pushButton_2_pressed()
{
    emit message1("122344");
}
void Publisher::trig_armStatus()
{

    emit trigArmStatusValueChanged();

}

void Publisher::armToolCallback(int arg)
{
//    qDebug() << Q_FUNC_INFO << arg;
    setArmToolStatus(arg);
}
void Publisher::commCallback(int value)
{
//    qDebug() << Q_FUNC_INFO << value;
    setComStatus(value);
}
void Publisher::battCallback(float value)
{
//    qDebug() << Q_FUNC_INFO << value;
    setBatteryValue(value);
}
void Publisher::errorCallback(QVector<int> value)
{
//    qDebug() << Q_FUNC_INFO << value;
    setErrValue(value);
}
void Publisher::tempCallback(QVector<int> value)
{
//    qDebug() << Q_FUNC_INFO << value;
    setTempValue(value);
}
void Publisher::velCallback(float current_vel_linear, float current_vel_angular, float max_linear, float max_angular)
{
    QVariantMap velocity;
    velocity.insert("current_vel_linear", current_vel_linear);
    velocity.insert("current_vel_angular", current_vel_angular);
    velocity.insert("max_linear", max_linear);
    velocity.insert("max_angular", max_angular);
    setVelocityValue(velocity);
}

void Publisher::utCallback(int vel, int deepcoat, int echo)
{
    QVariantMap utstatus;
    utstatus.insert("vel", vel);
    utstatus.insert("deepcoat", deepcoat);
    utstatus.insert("echo", echo);
    //qDebug() << vel << "pub";

    setUtstatus(utstatus);
}

void Publisher::initRosThread()
{
    // Create RosThread
    this->rost = new RosThread();
    connect(this, SIGNAL(message(QString)), this->rost, SLOT(addLine(QString)));
    connect(this, SIGNAL(message1(QString)), this->rost, SLOT(addLine(QString)));
    connect(this, SIGNAL(utVelChanged(QString)), this->rost, SLOT(sendUtVel(QString)));
    connect(this, SIGNAL(utDataChanged(QString)), this->rost, SLOT(sendUtData(QString)));
    connect(this, SIGNAL(toolToggleChanged(QString)), this->rost, SLOT(sendToolData(QString)));
    connect(this, SIGNAL(trigArmStatusValueChanged ()), this->rost, SLOT(checkArmStatus()));

    connect(this, SIGNAL(value(int)), this->rost, SLOT(armInitSrv(int)));
    connect(this, SIGNAL(value2(int)), this->rost, SLOT(crawlerInitSrv(int)));
    connect(this, SIGNAL(capImg(int)), this->rost, SLOT(capImgPub(int)));

    connect(this, SIGNAL(rstArm(int)), this->rost, SLOT(reset_arm(int)));
    connect(this, SIGNAL(rstCrawler(int)), this->rost, SLOT(reset_crawler(int)));
    connect(this->rost, SIGNAL(initArm(bool)), this, SLOT(initArm(bool)));
    connect(this->rost, SIGNAL(rstArm(bool)), this, SLOT(rstArm(bool)));
    connect(this->rost, SIGNAL(stopArm(bool)), this, SLOT(stopArm(bool)));
    connect(this->rost, SIGNAL(rstCrawler(bool)), this, SLOT(rstCrawler(bool)));
    connect(this->rost, SIGNAL(initCrawler(bool)), this, SLOT(initCrawler(bool)));
    connect(this->rost, SIGNAL(stopCrawler(bool)), this, SLOT(stopCrawler(bool)));

    connect(this->rost, SIGNAL(armToolCallback(int)), this, SLOT(armToolCallback(int)));
    connect(this->rost, SIGNAL(commCallback(int)), this, SLOT(commCallback(int)));
    connect(this->rost, SIGNAL(battCallback(float)), this, SLOT(battCallback(float)));
    connect(this->rost, SIGNAL(velCallback(float, float, float, float)), this, SLOT(velCallback(float, float, float, float)));
    connect(this->rost, SIGNAL(utCallback(int, int, int)), this, SLOT(utCallback(int, int, int)));
    connect(this->rost, SIGNAL(toggleCallback(bool)), this, SLOT(toggleCallback(bool)));
    connect(this->rost, SIGNAL(armCallback(QVector<int>)), this, SLOT(armCallback(QVector<int>)));
    connect(this->rost, SIGNAL(crawlerCallback(bool, bool,bool,bool)), this, SLOT(crawlerCallback(bool, bool,bool,bool)));
    connect(this->rost,SIGNAL(thicknessCallback(float, float)), this , SLOT(thicknessCallback(float, float)));
    connect(this->rost, SIGNAL(errorCallback(QVector<int>)), this, SLOT(errorCallback(QVector<int>)));
    connect(this->rost, SIGNAL(tempCallback(QVector<int>)), this, SLOT(tempCallback(QVector<int>)));

    this->rost->start();
}
float Publisher::getBatteryValue()
{
    return m_batteryValue;
}

void Publisher::setBatteryValue(float value)
{
    m_batteryValue = value;
//    qDebug() << "battery value" << value;
    emit batteryValueChanged(value);
}

QVector<int> Publisher::getTempValue()
{
    return m_tempValue;
}

void Publisher::setTempValue(QVector<int> value)
{
    m_tempValue = value;
//    qDebug()<<"temp"<<m_tempValue;

    emit tempValueChanged(value);
}

QVector<int> Publisher::getErrValue()
{
    return m_errValue;
}

void Publisher::setErrValue(QVector<int> value)
{
    m_errValue = value;
//    qDebug()<<"error"<<m_errValue;
    emit errValueChanged(value);
}

void Publisher::setComStatus(int value)
{
    m_comStatus = value;
    emit comStatusChanged(value);
}
int Publisher::getComStatus()
{
    return m_comStatus;
}
int Publisher::getArmToolStatus()
{
    return m_armToolStatus;
}
void Publisher::setArmToolStatus(int value)
{
    m_armToolStatus = value;
    emit armToolStatusChanged(value);
}
QVariantMap Publisher::getVelocityValue()
{
    return m_velocityValue;
}
void Publisher::setVelocityValue(QVariantMap value)
{
    m_velocityValue = value;
//    qDebug() << m_velocityValue;
    emit velocityValueChanged(value);
}
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
//    qDebug() << Q_FUNC_INFO << flag;
    setToggleValue(flag);
}
void Publisher::armCallback(QVector<int> status)
{

    setArmStatus(status);
}
QVector<int> Publisher::getArmStatus()
{
    return m_armStatus;
}
void Publisher::setArmStatus(QVector<int> value)
{
    m_armStatus = value;
//    qDebug()<<"in pub"<<(m_armStatus);
    emit armStatusChanged(m_armStatus);
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

QVariantMap Publisher::getCrawlStatus()
{
    return m_crawlStatus;
}
void Publisher::setCrawlStatus(QVariantMap value)
{
    m_crawlStatus = value;
    emit crawlStatusChanged(value);
}

QVariantMap Publisher::getUtstatus()
{
    return m_utStatus;
}
void Publisher::setUtstatus(QVariantMap value)
{
    m_utStatus = value;
    emit utstatusChanged(value);
}

void Publisher::call_arminit(int val)
{
    qDebug() << "I am at call_arminit";
    emit value(val);
}
void Publisher::call_crawlerinit(int val)
{    emit value2(val);
}
void Publisher::call_capImg(int val)
{
    emit capImg(val);
}
void Publisher::rst_arm(int val)
{
    emit rstArm(val);
}
void Publisher::rst_crawler(int val)
{    emit rstCrawler(val);
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
//    qDebug()<<m_utVel;

    emit utVelChanged(value);
}

QString Publisher::getUtData()
{
    return m_utData;
}
void Publisher::setUtData(QString value)
{

    m_utData = value;
//    qDebug()<<m_utVel;

    emit utDataChanged(value);
}

QString Publisher::getToolToggle()
{
    return m_toolToggle;
}
void Publisher::setToolToggle(QString value)
{

    m_toolToggle = value;
//    qDebug()<<m_toolToggle;

    emit toolToggleChanged(value);
}

bool Publisher::getInitArmValue()
{
    return m_initArmValue;
}
void Publisher::setInitArmValue(bool flag)
{
    m_initArmValue = flag;
    emit initArmValueChanged(flag);
}
void Publisher::initArm(bool flag)
{
//    qDebug() << Q_FUNC_INFO << flag;
    setInitArmValue(flag);
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
void Publisher::stopArm(bool flag)
{
//    qDebug() << Q_FUNC_INFO << flag;
    setStopArmValue(flag);
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
void Publisher::rstArm(bool flag)
{
//    qDebug() << Q_FUNC_INFO << flag;
    setRstArmValue(flag);
}


bool Publisher::getInitCrawlerValue()
{
    return m_initCrawlerValue;
}
void Publisher::setInitCrawlerValue(bool flag)
{
    m_initCrawlerValue = flag;
    emit initCrawlerValueChanged(flag);
}
void Publisher::initCrawler(bool flag)
{
//    qDebug() << Q_FUNC_INFO << flag;
    setInitCrawlerValue(flag);
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
void Publisher::stopCrawler(bool flag)
{
//    qDebug() << Q_FUNC_INFO << flag;
    setStopCrawlerValue(flag);
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
void Publisher::rstCrawler(bool flag)
{
//    qDebug() << Q_FUNC_INFO << flag;
    setRstCrawlerValue(flag);
}
