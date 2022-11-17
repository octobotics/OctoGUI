#include "connectros.h"

ConnectROS::ConnectROS(QObject *parent)
    : QObject(parent)
{
    m_masterURI = "http://localhost:11311";
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
void ConnectROS::connectMasterURI(QString master)
{
    std::map<std::string, std::string> remappings;
    remappings["__master"] = master.toStdString();
    remappings["__hostname"] = "localhost";
    std::cout << "master started!" << master.toStdString() << std::endl;
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
