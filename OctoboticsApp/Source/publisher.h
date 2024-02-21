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

/*!
 * \brief The Publisher class acts as a mediator between ros node and our qml page.
 */
class Publisher : public QObject
{
    Q_OBJECT

    // QProperty is like a C++ lambda and can be used to express relationships between different properties

    // communication
    Q_PROPERTY(int comStatus READ getComStatus WRITE setComStatus NOTIFY comStatusChanged)

    // crawler arm toggle status
    Q_PROPERTY(bool toggleValue READ getToggleValue WRITE setToggleValue NOTIFY toggleValueChanged)

    // arm tool
    Q_PROPERTY(int armToolStatus READ getArmToolStatus WRITE setArmToolStatus NOTIFY armToolStatusChanged)
    Q_PROPERTY(QString toolToggle READ getToolToggle WRITE setToolToggle NOTIFY toolToggleChanged)

    // arm
    Q_PROPERTY(bool slideCW READ getslideCWValue WRITE setslideCWValue NOTIFY slideCWValueChanged)
    Q_PROPERTY(bool slideCCW READ getslideCCWValue WRITE setslideCCWValue NOTIFY slideCCWValueChanged)
    Q_PROPERTY(bool stopArmValue READ getStopArmValue WRITE setStopArmValue NOTIFY stopArmValueChanged)
    Q_PROPERTY(bool rstArmValue READ getRstArmValue WRITE setRstArmValue NOTIFY rstArmValueChanged)
    Q_PROPERTY(QVector<int> armStatus READ getArmStatus WRITE setArmStatus NOTIFY armStatusChanged)

    // crawler
    Q_PROPERTY(bool initCrawlerValue READ getInitCrawlerValue WRITE setInitCrawlerValue NOTIFY initCrawlerValueChanged)
    Q_PROPERTY(bool stopCrawlerValue READ getStopCrawlerValue WRITE setStopCrawlerValue NOTIFY stopCrawlerValueChanged)
    Q_PROPERTY(bool rstCrawlerValue READ getRstCrawlerValue WRITE setRstCrawlerValue NOTIFY rstCrawlerValueChanged)
    Q_PROPERTY(QVector<int> errValue READ getErrValue WRITE setErrValue NOTIFY errValueChanged)
    Q_PROPERTY(QVector<int> tempValue READ getTempValue WRITE setTempValue NOTIFY tempValueChanged)
    Q_PROPERTY(QVariantMap crawlStatus READ getCrawlStatus WRITE setCrawlStatus NOTIFY crawlStatusChanged)
    Q_PROPERTY(float waterLevel READ getWaterLevel WRITE setWaterLevel NOTIFY waterlevelValueChanged)


    // Velocity
    Q_PROPERTY(int velocityValue READ getVelocityValue WRITE setVelocityValue NOTIFY velocityValueChanged)

    // battery
    Q_PROPERTY(float batteryValue READ getBatteryValue WRITE setBatteryValue NOTIFY batteryValueChanged)

    // current
    Q_PROPERTY(float currentValue READ getCurrentValue WRITE setCurrentValue NOTIFY currentValueChanged)

    // ut gauge
    Q_PROPERTY(QString utData READ getUtData WRITE setUtData NOTIFY utDataChanged)
    Q_PROPERTY(QString utVel READ getUtVel WRITE setUtVel NOTIFY utVelChanged)
    Q_PROPERTY(QVariantMap utstatus READ getUtstatus WRITE setUtstatus NOTIFY utstatusChanged)
    Q_PROPERTY(QVariantMap thickness READ getThickness WRITE setThickness NOTIFY thicknessChanged)

    // unique id
    Q_PROPERTY(QVector<QString> uid READ getUid WRITE setUid NOTIFY uidChanged)
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

    //toggle robot
    bool getToggleValue();
    void setToggleValue(bool flag);
    void toggleCallback(bool flag);


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
    void stopArm(bool k );
    void rstArm(bool k);

    //crawler
    bool getInitCrawlerValue();
    void setInitCrawlerValue(bool k);
    bool getStopCrawlerValue();
    void setStopCrawlerValue(bool k);
    bool getRstCrawlerValue();
    void setRstCrawlerValue(bool k);

    QVector<int> getTempValue();
    void setTempValue(QVector<int> value);
    QVector<int> getErrValue();
    void setErrValue(QVector<int> value);


    QVariantMap getCrawlStatus();
    void setCrawlStatus(QVariantMap value);


    void rst_crawler(int val);

    void call_crawlerinit(int val);

    void call_slidecw(int val);
    void call_slideccw(int val);

    void errorCallback(QVector<int> value);
    void tempCallback(QVector<int> value);

    void crawlerCallback(bool frontLeft, bool frontRight, bool backrRight, bool backLeft);

    void initCrawler(bool k);
    void stopCrawler(bool k );
    void rstCrawler(bool k);
    //battery
    float getBatteryValue();
    void setBatteryValue(float value);
    void battCallback(float value);

    //Velocity
     void velCallback(int current_vel_linear);
     int getVelocityValue();
     void setVelocityValue(int value);

    //current
    float getCurrentValue();
    void setCurrentValue(float value);
    void currentCallback(float value);

    void waterCallback(float level);

    //ut gauge
    QString getUtData();
    void setUtData(QString value);

    QString getUtVel();
    void setUtVel(QString value);

    QVariantMap getUtstatus();
    void setUtstatus(QVariantMap value);

    QVariantMap getThickness();
    void setThickness(QVariantMap value);

    void utCallback(int vel, int deepcoat, int echo);
    void thicknessCallback(float thickness, float unit);

    //unique id
    QVector<QString> getUid();
    void setUid(QVector<QString> value);
    void uidCallback(QVector<QString> value);

    //image
    void call_capImg(int val);


signals:
    void message(QString msg);
    void message1(QString msg);
    void value(int value);
    void value2(int value);
    void value3(int value);
    void value4(int value);



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

    void rstArmValueChanged(bool value);
    void stopArmValueChanged(bool value);
    void rstArm(int value);
    void trigArmStatusValueChanged();
    void armStatusChanged(QVector<int> status);

    //crawler
    void initCrawlerValueChanged(bool value);
    void stopCrawlerValueChanged(bool value);
    void rstCrawlerValueChanged(bool value);
    void errValueChanged(QVector<int> value);
    void tempValueChanged(QVector<int> value);
    void rstCrawler(int value);
    void crawlStatusChanged(QVariantMap status);
    void velocityValueChanged(int value);

    void waterlevelValueChanged(float level);

    //battery
    void batteryValueChanged(float value);

    //current
    void currentValueChanged(float value);

    //ut gauge
    void utstatusChanged(QVariantMap status);
    void thicknessChanged(QVariantMap status);
    void utVelChanged(QString value);
    void utDataChanged(QString value);

    //unique id
    void uidChanged(QVector<QString> value);

    //image capture
    void capImg(int value);
private:
    RosThread *rost;
    QCustomPlot*  m_CustomPlot;
    bool m_toggleValue;
    bool m_slideCW;
    bool m_slideCCW;
    bool m_rstArmValue;
    bool m_stopArmValue;
    bool m_initCrawlerValue;
    bool m_stopCrawlerValue;
    bool m_rstCrawlerValue;
    int m_comStatus;
    int m_armToolStatus;
    int m_velocityValue;
    float m_batteryValue;
    float m_currentValue;
    float m_waterValue;


    QString m_utVel;
    QString m_toolToggle;
    QString m_utData;

    QVariantMap m_crawlStatus;

    QVariantMap m_utStatus;
    QVariantMap m_thickness;

    QVector<int> m_armStatus;
    QVector<int> m_errValue;
    QVector<int> m_tempValue;
    QVector<QString> m_uidValue;

};
#endif // PUBLISHER_H
