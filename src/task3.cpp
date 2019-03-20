//
// Created by nikital on 3/17/19.
//

#include <task3.h>

Task3::Task3(QObject *parent)
    : QObject(parent), point_(0, 0), r_(0)
{

}

qreal Task3::x()
{
    return point_.x;
}

qreal Task3::y()
{
    return point_.y;
}

qreal Task3::r()
{
    return r_;
}

bool Task3::result()
{
    const Point circleCenter = {-r_, r_};
    const Point topLeftCorner = {0, 0};
    const Point bottomRightCorner = {2 * r_, -r_};
    bool isPointInCircle = point_.IsPointInCircle(circleCenter, r_);
    bool isPointInRectangle = point_.IsPointInRectangle(topLeftCorner, bottomRightCorner);
    bool result = isPointInCircle | isPointInRectangle;
    return result;
}

void Task3::setX(const qreal &x)
{
    if (point_.x == x)
        return;
    point_.x = x;
    emit xChanged();
    emit resultChanged();
}

void Task3::setY(const qreal &y)
{
    if (point_.y == y)
        return;
    point_.y = y;
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

bool Task3::Point::IsPointInCircle(const Point &circleCenter,
                                   const qreal &circleRaidus)
{
    qreal lengthBetweenPointAndCircleCenter = lengthToOtherPoint(circleCenter);
    bool result = lengthBetweenPointAndCircleCenter <= circleRaidus;
    return result;
}

bool Task3::Point::IsPointInRectangle(const Point &topLeftCorner,
                                      const Point &bottomRightCorner)
{
    bool xIsInRange = IsCoordinateInRange(x, topLeftCorner.x, bottomRightCorner.x);
    bool yIsInRange = IsCoordinateInRange(y, topLeftCorner.y, bottomRightCorner.y);
    bool result = xIsInRange & yIsInRange;
    return result;
}

qreal Task3::Point::lengthToOtherPoint(const Task3::Point &otherPoint) const
{
    qreal result = qSqrt(qPow(x - otherPoint.x, 2) + qPow(y - otherPoint.y, 2));
    return result;
}

bool Task3::Point::IsCoordinateInRange(const qreal &coordinate, const qreal &a, const qreal &b)
{
    qreal rangeStart = qMin(a, b);
    qreal rangeEnd = qMax(a, b);
    return coordinate >= rangeStart & coordinate <= rangeEnd;
}
