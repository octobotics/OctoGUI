#include "qquickitem.h"
#include <math.h>
#include <string.h>
#include "publisher.h"
Publisher::Publisher(QObject *parent)
    : QObject(parent)
{
    qDebug() << "MainWindow constructor";
    m_batteryValue = 44;
    m_comStatus = 0;
    m_armToolStatus = 0;
    m_toggleValue = false;

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

void Publisher::armToolCallback(int arg)
{
    qDebug() << Q_FUNC_INFO << arg;
    setArmToolStatus(arg);
}
void Publisher::commCallback(int value)
{
    qDebug() << Q_FUNC_INFO << value;
    setComStatus(value);
}
void Publisher::battCallback(float value)
{
    qDebug() << Q_FUNC_INFO << value;
    setBatteryValue(value);
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
//void Publisher::utfCallback(float ut, float force)
//{
//    QVariantMap velocity;
//    velocity.insert("ut", ut);
//    velocity.insert("force", force);
//    setUtFstatus(velocity);
//}
void Publisher::utCallback(int vel, int deepcoat, int echo)
{
    QVariantMap utstatus;
    utstatus.insert("vel", vel);
    utstatus.insert("deepcoat", deepcoat);
    utstatus.insert("echo", echo);
    qDebug() << vel << "pub";

    setUtstatus(utstatus);
}
//void Publisher::fCallback(float force)
//{
//    QVariantMap velocity;
//    velocity.insert("force", force);
//    setFstatus(velocity);
//}
void Publisher::initRosThread()
{
    // Create RosThread
    this->rost = new RosThread();
    connect(this, SIGNAL(message(QString)), this->rost, SLOT(addLine(QString)));
    connect(this, SIGNAL(message1(QString)), this->rost, SLOT(addLine(QString)));
    connect(this, SIGNAL(utVelChanged(QString)), this->rost, SLOT(sendUtVel(QString)));
    connect(this, SIGNAL(utDataChanged(QString)), this->rost, SLOT(sendUtData(QString)));
    connect(this, SIGNAL(toolToggleChanged(QString)), this->rost, SLOT(sendToolData(QString)));

    connect(this, SIGNAL(value(int)), this->rost, SLOT(armInitSrv(int)));
    connect(this, SIGNAL(value2(int)), this->rost, SLOT(crawlerInitSrv(int)));
    connect(this, SIGNAL(rstArm(int)), this->rost, SLOT(reset_arm(int)));
    connect(this, SIGNAL(rstCrawler(int)), this->rost, SLOT(reset_crawler(int)));

    connect(this->rost, SIGNAL(armToolCallback(int)), this, SLOT(armToolCallback(int)));
    connect(this->rost, SIGNAL(commCallback(int)), this, SLOT(commCallback(int)));
    connect(this->rost, SIGNAL(battCallback(float)), this, SLOT(battCallback(float)));
    connect(this->rost, SIGNAL(velCallback(float, float, float, float)), this, SLOT(velCallback(float, float, float, float)));
//    connect(this->rost, SIGNAL(utfCallback(float, float)), this, SLOT(utfCallback(float, float)));
    connect(this->rost, SIGNAL(utCallback(int, int, int)), this, SLOT(utCallback(int, int, int)));
//    connect(this->rost, SIGNAL(fCallback(float)), this, SLOT(fCallback(float)));
    connect(this->rost, SIGNAL(toggleCallback(bool)), this, SLOT(toggleCallback(bool)));
    connect(this->rost, SIGNAL(armCallback(bool, bool, bool, bool)), this, SLOT(armCallback(bool, bool, bool, bool)));
    connect(this->rost, SIGNAL(crawlerCallback(bool, bool, bool, bool)), this, SLOT(crawlerCallback(bool, bool, bool, bool)));
    connect(this->rost,SIGNAL(thicknessCallback(float, float)), this , SLOT(thicknessCallback(float, float)));
//    connect(this->rost,SIGNAL(graphCallback(QVector<int>)),this,SLOT(graphCallback(QVector<int>)));
//    connect(this->rost,SIGNAL(graphCallback(QVector<int>)),m_cst,SLOT(graphCallback(QVector<int>)));

    this->rost->start();
}
float Publisher::getBatteryValue()
{
    return m_batteryValue;
}

void Publisher::setBatteryValue(float value)
{
    m_batteryValue = value;
    qDebug() << "battery value" << value;
    emit batteryValueChanged(value);
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
    qDebug() << m_velocityValue;
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
    qDebug() << Q_FUNC_INFO << flag;
    setToggleValue(flag);
}
void Publisher::armCallback(bool base, bool shoulder, bool elbow, bool tool)
{
    qDebug() << Q_FUNC_INFO << "base :" << base << "shoulder :" << shoulder << "elbow :" << elbow << "tool:" << tool;
    QVariantMap armCallback;
    armCallback.insert("base", base);
    armCallback.insert("shoulder", shoulder);
    armCallback.insert("elbow", elbow);
    armCallback.insert("tool", tool);
    setArmStatus(armCallback);
}
QVariantMap Publisher::getArmStatus()
{
    return m_armStatus;
}
void Publisher::setArmStatus(QVariantMap value)
{
    m_armStatus = value;
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
//void Publisher::graphCallback(QVector<int> v)
//{
//   qDebug()<<v[0];
//   emit graphPub(v);
//}
//void Publisher::graphPub(QVector<int> val)
//{

//emit graphPub(val);
//}

QVariantMap Publisher::getCrawlStatus()
{
    return m_crawlStatus;
}
void Publisher::setCrawlStatus(QVariantMap value)
{
    m_crawlStatus = value;
    emit crawlStatusChanged(value);
}
//QVariantMap Publisher::getUtFstatus()
//{
//    return m_utFStatus;
//}
//void Publisher::setUtFstatus(QVariantMap value)
//{
//    m_utFStatus = value;
//    emit utFstatusChanged(value);
//}
QVariantMap Publisher::getUtstatus()
{
    return m_utStatus;
}
void Publisher::setUtstatus(QVariantMap value)
{
    m_utStatus = value;
    emit utstatusChanged(value);
}
//QVariantMap Publisher::getFstatus()
//{
//    return m_FStatus;
//}
//void Publisher::setFstatus(QVariantMap value)
//{
//    m_FStatus = value;
//    emit FstatusChanged(value);
//}
void Publisher::call_arminit(int val)
{
    emit value(val);
}
void Publisher::call_crawlerinit(int val)
{    emit value2(val);
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
    qDebug()<<m_utVel;

    emit utVelChanged(value);
}

QString Publisher::getUtData()
{
    return m_utData;
}
void Publisher::setUtData(QString value)
{

    m_utData = value;
    qDebug()<<m_utVel;

    emit utDataChanged(value);
}

QString Publisher::getToolToggle()
{
    return m_toolToggle;
}
void Publisher::setToolToggle(QString value)
{

    m_toolToggle = value;
    qDebug()<<m_toolToggle;

    emit toolToggleChanged(value);
}

