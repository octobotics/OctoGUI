#ifndef CONNECTROS_H
#define CONNECTROS_H
#include "QDebug"
#include <ros/ros.h>
#include <QObject>
#include <QDir>
class ConnectROS : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString masterURI READ getMasterURI WRITE setMasterURI NOTIFY masterURIChanged)
public:
    explicit ConnectROS(QObject *parent = nullptr);

signals:
    void masterURIChanged(const QString &arg);
    void retry();
    void connectSuccess();
public slots:
    QString getMasterURI();
    void setMasterURI(const QString &arg);
    void connectMasterURI(QString master);

private:
    QString m_masterURI;
};
#endif // CONNECTROS_H
