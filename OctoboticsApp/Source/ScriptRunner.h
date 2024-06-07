#ifndef SCRIPTRUNNER_H
#define SCRIPTRUNNER_H
#include <QObject>
#include <QProcess>
#include <QDebug>

class ScriptRunner: public QObject
{
    Q_OBJECT

public:
    Q_INVOKABLE void runCamera()
    {
        qDebug() << " Run Camera Called";
        QProcess::startDetached("/bin/bash",QStringList() << "/home/sensei/Desktop/camera.sh");
    }

    Q_INVOKABLE void startJoystick()
    {
        qDebug() << " Run Joystick";
        QProcess::startDetached("/bin/bash",QStringList() << "/home/sensei/Desktop/joystick.sh");
    }

    Q_INVOKABLE void recordCamera()
    {
        qDebug() <<"Record Camera";
        QProcess::startDetached("/bin/bash",QStringList() << "/home/sensei/Desktop/record.sh");

    }
};

#endif // SCRIPTRUNNER_H
