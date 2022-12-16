#ifndef PUBLISHER_H
#define PUBLISHER_H
#include "rosthread.h"
#include <QDebug>
#include <QString>
#include <QThread>
class Publisher : public QObject
{
    Q_OBJECT
    Q_PROPERTY(float batteryValue READ getBatteryValue WRITE setBatteryValue NOTIFY batteryValueChanged)
    Q_PROPERTY(int comStatus READ getComStatus WRITE setComStatus NOTIFY comStatusChanged)
    Q_PROPERTY(int armToolStatus READ getArmToolStatus WRITE setArmToolStatus NOTIFY armToolStatusChanged)
    Q_PROPERTY(QVariantMap velocityValue READ getVelocityValue WRITE setVelocityValue NOTIFY velocityValueChanged)
    Q_PROPERTY(bool toggleValue READ getToggleValue WRITE setToggleValue NOTIFY toggleValueChanged)

    Q_PROPERTY(QVariantMap armStatus READ getArmStatus WRITE setArmStatus NOTIFY armStatusChanged)
    Q_PROPERTY(QVariantMap crawlStatus READ getCrawlStatus WRITE setCrawlStatus NOTIFY crawlStatusChanged)
    Q_PROPERTY(QVariantMap utstatus READ getUtstatus WRITE setUtstatus NOTIFY utstatusChanged)
    Q_PROPERTY(QVariantMap Fstatus READ getFstatus WRITE setFstatus NOTIFY FstatusChanged)
public:
    explicit Publisher(QObject *parent = nullptr);
    ~Publisher();
public slots:
    void on_pushButton_pressed();
    void on_pushButton_2_pressed();
    void call_arminit();
    void call_crawlerinit();
    void armToolCallback(int arg);
    void commCallback(int value);
    void battCallback(float value);
    void velCallback(float current_vel_linear, float current_vel_angular, float max_linear, float max_angular);
    void utCallback(float ut);
    void fCallback(float force);
    void initRosThread();
    float getBatteryValue();
    void setBatteryValue(float value);
    void setComStatus(int value);
    int getComStatus();
    int getArmToolStatus();
    void setArmToolStatus(int value);
    QVariantMap getVelocityValue();
    void setVelocityValue(QVariantMap value);
    bool getToggleValue();
    void setToggleValue(bool flag);
    void toggleCallback(bool flag);
    void armCallback(bool base, bool shoulder, bool elbow, bool tool);
    QVariantMap getArmStatus();
    void setArmStatus(QVariantMap value);
    void crawlerCallback(bool frontLeft, bool frontRight, bool backrRight, bool backLeft);
    QVariantMap getCrawlStatus();
    void setCrawlStatus(QVariantMap value);
//    QVariantMap getUtFstatus();
//    void setUtFstatus(QVariantMap value);
        QVariantMap getUtstatus();
        void setUtstatus(QVariantMap value);
            QVariantMap getFstatus();
            void setFstatus(QVariantMap value);
signals:
    void message(QString msg);
    void message1(QString msg);
    void value(int value);
    void value2(int value);

    void batteryValueChanged(float value);
    void comStatusChanged(int value);
    void armToolStatusChanged(int value);
    void velocityValueChanged(QVariantMap value);
    void toggleValueChanged(bool value);
    void armStatusChanged(QVariantMap status);
    void crawlStatusChanged(QVariantMap status);
    void utstatusChanged(QVariantMap status);
    void FstatusChanged(QVariantMap status);

private:
    RosThread *rost;
    float m_batteryValue;
    int m_comStatus;
    int m_armToolStatus;
    QVariantMap m_velocityValue;
    bool m_toggleValue;
    QVariantMap m_armStatus;
    QVariantMap m_crawlStatus;

//    QVariantMap m_utFStatus;
    QVariantMap m_FStatus;
    QVariantMap m_utStatus;


};
#endif // PUBLISHER_H
