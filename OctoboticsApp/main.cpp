#include "Source/connectros.h"
#include "Source/publisher.h"
#include <QGuiApplication>
#include <QApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "Source/hellocpp.h"
#include "Source/customplotitem.h"
//#include "gststream.h"

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QApplication app(argc, argv);
    QQmlApplicationEngine engine;
    QQmlContext *ctx = engine.rootContext();
    Publisher m_pub;
    ConnectROS m_connectROS;
//    CustomPlotItem m_cst;
    qmlRegisterType<HelloCpp>("HelloCpp", 1, 0, "HelloCpp");
    qmlRegisterType<CustomPlotItem>("CustomPlot", 1, 0, "CustomPlotItem");

    ctx->setContextProperty("publisher", &m_pub);
    ctx->setContextProperty("connectROS", &m_connectROS);
    const QUrl url(QStringLiteral("qrc:/UI/main.qml"));
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
                         if (!obj && url == objUrl)
                             QCoreApplication::exit(-1);
                     }, Qt::QueuedConnection);
    engine.load(url);

    return app.exec();
}
