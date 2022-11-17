#include "Source/connectros.h"
#include "Source/publisher.h"
#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QGuiApplication app(argc, argv);
    QQmlApplicationEngine engine;
    QQmlContext *ctx = engine.rootContext();
    Publisher m_pub;
    ConnectROS m_connectROS;
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
