#include "connectros.h"

ConnectROS::ConnectROS(QObject *parent)
    : QObject(parent)
{
    m_masterURI = "http://octo:11311";
//    m_masterURI = "http://10.223.240.1:11311";

    m_host = "octo";
}
QString ConnectROS::getMasterURI()
{
    return m_masterURI;
}
void ConnectROS::setMasterURI(const QString &arg)
{
    m_masterURI = arg;
    emit masterURIChanged(arg);
}
QString ConnectROS::getHost()
{
    return m_host;
}
void ConnectROS::setHost(const QString &arg)
{
    m_host = arg;
    emit hostChanged(arg);
}
void ConnectROS::connectMasterURI(QString master, QString hostname)
{
    std::map<std::string, std::string> remappings;
    remappings["__master"] = master.toStdString();
    remappings["__hostname"] = hostname.toStdString();
    std::cout << "master started!"
              << "master :: " << master.toStdString() << " host :: " << hostname.toStdString() << std::endl;
    ros::init(remappings, "octo_gui");
    if (ros::master::check())
    {
        ros::start();
        std::cout << "master started!" << std::endl;
        QDir dirScanSpectra;
        if (!dirScanSpectra.exists("SCREENSHOT"))
        {
            dirScanSpectra.mkdir("SCREENSHOT");
        }
        emit connectSuccess();
    }
    else
    {
        ros::shutdown();
        std::cout << "master not started!" << std::endl;
        emit retry();
    }
}
