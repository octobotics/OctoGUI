// commandexecutor.h
#ifndef COMMANDEXECUTOR_H
#define COMMANDEXECUTOR_H

#include <QObject>
#include <QProcess>

class CommandExecutor : public QObject
{
    Q_OBJECT

public:
    explicit CommandExecutor(QObject *parent = nullptr);

public slots:
    void executeCommand(const QString &command, const QStringList &arguments);

signals:
    void commandOutput(const QString &output);
    void commandError(const QString &error);
    void commandFinished(int exitCode, QProcess::ExitStatus exitStatus);

private:
    QProcess process;
};

#endif // COMMANDEXECUTOR_H
