#include "task1.h"

Task1::Task1(QObject *parent)
    :
    QObject(parent),
    outer_radius_(0.0),
    inter_radius_(0.0),
    area_of_ring_(0.0)
{
}

qreal Task1::outerRadius()
{
    return outer_radius_;
}

qreal Task1::interRadius()
{
    return inter_radius_;
}

qreal Task1::areaOfRing()
{
    return area_of_ring_;
}

void Task1::setOuterRadius(const qreal &outer_radius)
{
    if (outerRadius() == outer_radius)
        return;
    outer_radius_ = outer_radius;
    emit outerRadiusChanged();
}

void Task1::setInterRadius(const qreal &inter_radius)
{
    if (inter_radius_ == inter_radius)
        return;
    inter_radius_ = inter_radius;
    emit interRadiusChanged();
}

void Task1::calculateAreaOfRing()
{
    qDebug() << "Outer radius: " << outer_radius_;
    qDebug() << "Inter radius: " << inter_radius_;
    qreal areaOfBiggerCircle = calculateAreaOfCircle(outer_radius_);
    qreal areaOfSmallerCircle = calculateAreaOfCircle(inter_radius_);
    area_of_ring_ = areaOfBiggerCircle - areaOfSmallerCircle;
    emit areaOfRingChanged();
}