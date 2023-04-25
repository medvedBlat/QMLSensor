#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QDebug>
#include <QTimer>
#include "qmlinterface.h"
#include "QQmlContext"


int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);
    QQuickStyle::setStyle("material");
    QmlInterface inter;
    QQmlApplicationEngine engine;
    QQmlContext *context = engine.rootContext();
    context->setContextProperty("inter", &inter);
    QQmlComponent component(&engine, "qrc:/main.qml" );
    QObject *object = component.create();
    QTimer timer;
    QObject::connect(&timer, &QTimer::timeout, [=] {qDebug();});
    timer.start(100);
    return app.exec();
}

