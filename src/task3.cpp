//
// Created by nikital on 3/17/19.
//

#include <task3.h>

Task3::Task3(QObject *parent)
    : QObject(parent), x_(0), y_(0), r_(0)
{

}

qreal Task3::x()
{
    return x_;
}

qreal Task3::y()
{ return y_;
}

qreal Task3::r()
{
    return r_;
}

bool Task3::result()
{
    bool isPointInCircle = IsPointInCircle(x_, y_, -r_, r_, r_);
    bool isPointInRectangle = IsPointInRectangle(x_, y_, 0, 0, 2 * r_, -r_);
    bool result = isPointInCircle | isPointInRectangle;
    return  result;
}

void Task3::setX(const qreal &x)
{
    if (x_ == x)
        return;
    x_ = x;
    emit xChanged();
    emit resultChanged();
}

void Task3::setY(const qreal &y)
{
    if (y_ ==  y)
        return;
    y_ = y;
    emit yChanged();
    emit resultChanged();
}

void Task3::setR(const qreal &r)
{
    if (r_ == r)
        return;
    r_ = r;
    emit rChanged();
    emit resultChanged();
}

bool Task3::IsPointInCircle(const qreal &x,
                            const qreal &y,
                            const qreal &circleX,
                            const qreal &circleY,
                            const qreal &circleRaidus)
{
    qDebug() << "X: " << x << "Y: " <<  y << "circle X: " << circleX << "circleY: " << circleY;
    qreal lengthBetweenPointAndCircleCenter = qSqrt(qPow(x - circleX, 2) + qPow(y - circleY, 2));
    qDebug() << "length between point and circle center" << lengthBetweenPointAndCircleCenter;
    bool result = lengthBetweenPointAndCircleCenter <= circleRaidus;
    return result;
}
bool Task3::IsPointInRectangle(const qreal &x,
                               const qreal &y,
                               const qreal &rectangleTopLeftX,
                               const qreal &rectangleTopLeftY,
                               const qreal &rectangleBottomRightX,
                               const qreal &rectangleBottomRightY)
{
    bool result = x >= rectangleTopLeftX & x <= rectangleBottomRightX;
    result &= y >= rectangleTopLeftY & y <= rectangleBottomRightY;
    return result;
}
