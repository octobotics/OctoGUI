#ifndef PUBLISHER_H
#define PUBLISHER_H
#include "rosthread.h"
#include <QDebug>
#include <QString>
#include <QThread>

class Publisher : public QObject
{
    Q_OBJECT
    Q_PROPERTY(bool toggleValue READ getToggleValue WRITE setToggleValue NOTIFY toggleValueChanged)
    Q_PROPERTY(bool rstArmValue READ getRstArmValue WRITE setRstArmValue NOTIFY rstArmValueChanged)
    Q_PROPERTY(bool initArmValue READ getInitArmValue WRITE setInitArmValue NOTIFY initArmValueChanged)
    Q_PROPERTY(bool stopArmValue READ getStopArmValue WRITE setStopArmValue NOTIFY stopArmValueChanged)
    Q_PROPERTY(bool stopCrawlerValue READ getStopCrawlerValue WRITE setStopCrawlerValue NOTIFY stopCrawlerValueChanged)
    Q_PROPERTY(bool rstCrawlerValue READ getRstCrawlerValue WRITE setRstCrawlerValue NOTIFY rstCrawlerValueChanged)
    Q_PROPERTY(bool initCrawlerValue READ getInitCrawlerValue WRITE setInitCrawlerValue NOTIFY initCrawlerValueChanged)
    Q_PROPERTY(int comStatus READ getComStatus WRITE setComStatus NOTIFY comStatusChanged)
    Q_PROPERTY(int armToolStatus READ getArmToolStatus WRITE setArmToolStatus NOTIFY armToolStatusChanged)
    Q_PROPERTY(float batteryValue READ getBatteryValue WRITE setBatteryValue NOTIFY batteryValueChanged)
    Q_PROPERTY(QString utVel READ getUtVel WRITE setUtVel NOTIFY utVelChanged)
    Q_PROPERTY(QString utData READ getUtData WRITE setUtData NOTIFY utDataChanged)
    Q_PROPERTY(QString toolToggle READ getToolToggle WRITE setToolToggle NOTIFY toolToggleChanged)
    Q_PROPERTY(QVector<int> errValue READ getErrValue WRITE setErrValue NOTIFY errValueChanged)
    Q_PROPERTY(QVector<int> tempValue READ getTempValue WRITE setTempValue NOTIFY tempValueChanged)
    Q_PROPERTY(QVector<int> armStatus READ getArmStatus WRITE setArmStatus NOTIFY armStatusChanged)
    Q_PROPERTY(QVariantMap utstatus READ getUtstatus WRITE setUtstatus NOTIFY utstatusChanged)
    Q_PROPERTY(QVariantMap thickness READ getThickness WRITE setThickness NOTIFY thicknessChanged)
    Q_PROPERTY(QVariantMap crawlStatus READ getCrawlStatus WRITE setCrawlStatus NOTIFY crawlStatusChanged)
    Q_PROPERTY(QVariantMap velocityValue READ getVelocityValue WRITE setVelocityValue NOTIFY velocityValueChanged)
public:
    explicit Publisher(QObject *parent = nullptr);

    ~Publisher();
public slots:
    void initRosThread();
    void on_pushButton_pressed();
    void on_pushButton_2_pressed();
    void call_arminit(int val);
    void trig_armStatus();
    void call_crawlerinit(int val);
    void rst_arm(int val);
    void rst_crawler(int val);

    void armToolCallback(int arg);
    void thicknessCallback(float thickness, float unit);
    void commCallback(int value);
    void battCallback(float value);
    void tempCallback(QVector<int> value);
    void errorCallback(QVector<int> value);
    void velCallback(float current_vel_linear, float current_vel_angular, float max_linear, float max_angular);
    void utCallback(int vel, int deepcoat, int echo);
    void toggleCallback(bool flag);
    void armCallback(QVector<int> status);
    void crawlerCallback(bool frontLeft, bool frontRight, bool backrRight, bool backLeft);
    void initArm(bool k);
    void stopArm(bool k );
    void rstArm(bool k);
    void rstCrawler(bool k);
    void initCrawler(bool k);
    void stopCrawler(bool k );

    void setToggleValue(bool flag);
    void setInitArmValue(bool k);
    void setRstArmValue(bool k);
    void setStopArmValue(bool k);
    void setInitCrawlerValue(bool k);
    void setStopCrawlerValue(bool k);
    void setRstCrawlerValue(bool k);
    void setComStatus(int value);
    void setArmToolStatus(int value);
    void setBatteryValue(float value);
    void setUtVel(QString value);
    void setUtData(QString value);
    void setToolToggle(QString value);
    void setArmStatus(QVector<int> value);
    void setUtstatus(QVariantMap value);
    void setVelocityValue(QVariantMap value);
    void setCrawlStatus(QVariantMap value);
    void setThickness(QVariantMap value);
    void setTempValue(QVector<int> value);
    void setErrValue(QVector<int> value);

    bool getToggleValue();
    bool getInitArmValue();
    bool getRstArmValue();
    bool getStopArmValue();
    bool getInitCrawlerValue();
    bool getStopCrawlerValue();
    bool getRstCrawlerValue();
    int getArmToolStatus();
    int getComStatus();
    float getBatteryValue();
    QString getUtData();
    QString getUtVel();
    QString getToolToggle();
    QVariantMap getVelocityValue();
    QVector<int> getArmStatus();
    QVariantMap getCrawlStatus();
    QVariantMap getUtstatus();
    QVariantMap getThickness();
    QVector<int> getTempValue();
    QVector<int> getErrValue();


signals:
    void message(QString msg);
    void message1(QString msg);
    void value(int value);
    void value2(int value);
    void rstArm(int value);
    void rstCrawler(int value);
    void trigArmStatusValueChanged();

    void initArmValueChanged(bool value);
    void rstArmValueChanged(bool value);
    void stopArmValueChanged(bool value);
    void initCrawlerValueChanged(bool value);
    void stopCrawlerValueChanged(bool value);
    void rstCrawlerValueChanged(bool value);

    void toggleValueChanged(bool value);
    void comStatusChanged(int value);
    void armToolStatusChanged(int value);
    void batteryValueChanged(float value);
    void velocityValueChanged(QVariantMap value);
    void armStatusChanged(QVector<int> status);
    void crawlStatusChanged(QVariantMap status);
    void utstatusChanged(QVariantMap status);
    void thicknessChanged(QVariantMap status);
    void utVelChanged(QString value);
    void utDataChanged(QString value);
    void toolToggleChanged(QString value);
    void errValueChanged(QVector<int> value);
    void tempValueChanged(QVector<int> value);

private:
    RosThread *rost;
    QCustomPlot*  m_CustomPlot;
    bool m_toggleValue;
    bool m_initArmValue;
    bool m_rstArmValue;
    bool m_stopArmValue;
    bool m_initCrawlerValue;
    bool m_stopCrawlerValue;
    bool m_rstCrawlerValue;
    int m_comStatus;
    int m_armToolStatus;
    float m_batteryValue;

    QString m_utVel;
    QString m_toolToggle;
    QString m_utData;

    QVariantMap m_crawlStatus;
    QVariantMap m_velocityValue;
    QVariantMap m_utStatus;
    QVariantMap m_thickness;

    QVector<int> m_armStatus;
    QVector<int> m_errValue;
    QVector<int> m_tempValue;


};
#endif // PUBLISHER_H
