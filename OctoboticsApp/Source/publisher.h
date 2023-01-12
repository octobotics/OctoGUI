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
//    Q_PROPERTY(QVariantMap Fstatus READ getFstatus WRITE setFstatus NOTIFY FstatusChanged)
    Q_PROPERTY(QString utVel READ getUtVel WRITE setUtVel NOTIFY utVelChanged)
    Q_PROPERTY(QString utData READ getUtData WRITE setUtData NOTIFY utDataChanged)
    Q_PROPERTY(QString toolToggle READ getToolToggle WRITE setToolToggle NOTIFY toolToggleChanged)
    Q_PROPERTY(QVariantMap thickness READ getThickness WRITE setThickness NOTIFY thicknessChanged)
public:
    explicit Publisher(QObject *parent = nullptr);
//    void paint( QPainter* painter );
//    Q_INVOKABLE void initCustomPlot();

    ~Publisher();
public slots:
    void on_pushButton_pressed();
    void on_pushButton_2_pressed();
    void thicknessCallback(float thickness, float unit);
    void call_arminit(int val);
    void call_crawlerinit(int val);
    void rst_arm(int val);
    void rst_crawler(int val);
    void armToolCallback(int arg);
    void commCallback(int value);
    void battCallback(float value);
    void velCallback(float current_vel_linear, float current_vel_angular, float max_linear, float max_angular);
    void utCallback(int vel, int deepcoat, int echo);
//    void graphCallback(QVector<int> v);
//    void fCallback(float force);
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

//    void MakePlot(int xrange, int yrange);
//    int printRandoms(int lower, int upper);
//    QVariantMap getUtFstatus();
//    void setUtFstatus(QVariantMap value);
        QVariantMap getUtstatus();
        void setUtstatus(QVariantMap value);
//            QVariantMap getFstatus();
//            void setFstatus(QVariantMap value);
//            void onCustomReplot();
//            void updateCustomPlotSize();
          QString getUtVel();
          void setUtVel(QString value);
          QString getUtData();
          void setUtData(QString value);
          QString getToolToggle();
          void setToolToggle(QString value);
            QVariantMap getThickness();
            void setThickness(QVariantMap value);

signals:
    void message(QString msg);
    void message1(QString msg);
    void value(int value);
    void value2(int value);
    void rstArm(int value);
    void rstCrawler(int value);

    void batteryValueChanged(float value);
    void comStatusChanged(int value);
    void armToolStatusChanged(int value);
    void velocityValueChanged(QVariantMap value);
    void toggleValueChanged(bool value);
    void armStatusChanged(QVariantMap status);
    void crawlStatusChanged(QVariantMap status);
    void utstatusChanged(QVariantMap status);
//    void FstatusChanged(QVariantMap status);
    void thicknessChanged(QVariantMap status);
    void utVelChanged(QString value);
    void utDataChanged(QString value);
    void toolToggleChanged(QString value);

private:
    RosThread *rost;
    float m_batteryValue;
    int m_comStatus;
    int m_armToolStatus;
    QVariantMap m_velocityValue;
    bool m_toggleValue;
    QVariantMap m_armStatus;
    QVariantMap m_crawlStatus;
    QCustomPlot*  m_CustomPlot;
//    CustomPlotItem* m_cst;
    QString m_utVel;
//    QVariantMap m_utFStatus;
//    QVariantMap m_FStatus;
    QVariantMap m_utStatus;
     QVariantMap m_thickness;
     QString m_utData;
     QString m_toolToggle;



};
#endif // PUBLISHER_H
