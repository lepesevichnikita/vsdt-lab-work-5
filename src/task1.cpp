#include "task1.h"

Task1::Task1(QObject *parent) :
    QObject(parent) {
}

QString Task1::outerRadius() {
  return outer_radius_;
}

void Task1::setOuterRadius(const QString &outer_radius) {
  if (outerRadius() == outer_radius)
    return;
  outer_radius_ = outer_radius;
  emit outerRadiusChanged();
}


