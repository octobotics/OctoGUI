// commandexecutor.cpp
#include "commandexecutor.h"

CommandExecutor::CommandExecutor(QObject *parent)
    : QObject(parent)
{
    connect(&process, &QProcess::readyReadStandardOutput, this, [this]() {
        emit commandOutput(process.readAllStandardOutput());
    });

    connect(&process, &QProcess::readyReadStandardError, this, [this]() {
        emit commandError(process.readAllStandardError());
    });

    connect(&process, QOverload<int, QProcess::ExitStatus>::of(&QProcess::finished),
            this, &CommandExecutor::commandFinished);
}

void CommandExecutor::executeCommand(const QString &command, const QStringList &arguments)
{
    process.start(command, arguments);
    process.waitForFinished();
}
