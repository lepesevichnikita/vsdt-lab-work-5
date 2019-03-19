#include <QGuiApplication>
#include <QQmlApplicationEngine>

#include "task1.h"
#include "task2.h"
#include "task3.h"

int main(int argc, char *argv[]) {
  QGuiApplication app(argc, argv);
  qmlRegisterType<Task1>("io.qt.examples.task1", 1, 0, "Task1");
  qmlRegisterType<Task2>("io.qt.examples.task2", 1, 0, "Task2");
  qmlRegisterType<Task3>("io.qt.examples.task3", 1, 0, "Task3");

  QQmlApplicationEngine engine;
  engine.load(QUrl(QStringLiteral("qrc:///main.qml")));

  return app.exec();
}
