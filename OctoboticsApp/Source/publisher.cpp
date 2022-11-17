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
void Publisher::utfCallback(float ut, float force)
{
    QVariantMap velocity;
    velocity.insert("ut", ut);
    velocity.insert("force", force);
    setUtFstatus(velocity);
}
void Publisher::initRosThread()
{
    // Create RosThread
    this->rost = new RosThread();
    connect(this, SIGNAL(message(QString)), this->rost, SLOT(addLine(QString)));
    connect(this, SIGNAL(message1(QString)), this->rost, SLOT(addLine(QString)));
    connect(this->rost, SIGNAL(armToolCallback(int)), this, SLOT(armToolCallback(int)));
    connect(this->rost, SIGNAL(commCallback(int)), this, SLOT(commCallback(int)));
    connect(this->rost, SIGNAL(battCallback(float)), this, SLOT(battCallback(float)));
    connect(this->rost, SIGNAL(velCallback(float, float, float, float)), this, SLOT(velCallback(float, float, float, float)));
    connect(this->rost, SIGNAL(utfCallback(float, float)), this, SLOT(utfCallback(float, float)));
    connect(this->rost, SIGNAL(toggleCallback(bool)), this, SLOT(toggleCallback(bool)));
    connect(this->rost, SIGNAL(armCallback(bool, bool, bool, bool)), this, SLOT(armCallback(bool, bool, bool, bool)));
    connect(this->rost, SIGNAL(crawlerCallback(bool, bool, bool, bool)), this, SLOT(crawlerCallback(bool, bool, bool, bool)));
    // start begins periodically executing the run() function
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
QVariantMap Publisher::getCrawlStatus()
{
    return m_crawlStatus;
}
void Publisher::setCrawlStatus(QVariantMap value)
{
    m_crawlStatus = value;
    emit crawlStatusChanged(value);
}
QVariantMap Publisher::getUtFstatus()
{
    return m_utFStatus;
}
void Publisher::setUtFstatus(QVariantMap value)
{
    m_utFStatus = value;
    emit utFstatusChanged(value);
}
