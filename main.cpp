#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>

#include "calculatormodel.h"
#include "calculatorcontroller.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    CalculatorModel* model = new CalculatorModel(1, 1);
    CalculatorController* controller = new CalculatorController(model);

    QQmlApplicationEngine engine;
    QObject::connect(
        &engine,
        &QQmlApplicationEngine::objectCreationFailed,
        &app,
        []() { QCoreApplication::exit(-1); },
        Qt::QueuedConnection);
    engine.rootContext()->setContextProperty("model", model);
    engine.rootContext()->setContextProperty("controller", controller);
    engine.loadFromModule("qt_demo", "Main");

    return app.exec();
}
