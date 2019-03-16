#include <QGuiApplication>
#include <QQmlApplicationEngine>

#include "task1.h"
#include "task2.h"

int main(int argc, char *argv[]) {
  QGuiApplication app(argc, argv);
  qmlRegisterType<Task1>("io.qt.examples.task1", 1, 0, "Task1");
  qmlRegisterType<Task2>("io.qt.examples.task2", 1, 0, "Task2");

  QQmlApplicationEngine engine;
  engine.load(QUrl(QStringLiteral("qrc:///main.qml")));

  return app.exec();
}
