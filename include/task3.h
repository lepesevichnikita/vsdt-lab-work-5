//
// Created by nikital on 3/17/19.
//

#ifndef LAB5_INCLUDE_TASK3_H
#define LAB5_INCLUDE_TASK3_H

#include <QObject>
#include <QtMath>
#include <QDebug>

class Task3: public QObject
{
Q_OBJECT
    Q_PROPERTY(qreal x
                   READ
                       x
                   WRITE
                       setX
                   NOTIFY
                   xChanged)
    Q_PROPERTY(qreal y
                   READ
                       y
                   WRITE
                       setY
                   NOTIFY
                   yChanged)

    Q_PROPERTY(qreal
                   r
                   READ
                       r
                   WRITE
                       setR
                   NOTIFY
                   rChanged)

    Q_PROPERTY(bool result
                   READ
                       result
                   NOTIFY
                   resultChanged)
public:
    explicit Task3(QObject *parent = nullptr);

    qreal x();
    qreal y();
    qreal r();
    bool result();

    void setX(const qreal &);
    void setY(const qreal &);
    void setR(const qreal &);

signals:
    void xChanged();
    void yChanged();
    void rChanged();
    void resultChanged();

private:
    qreal x_;
    qreal y_;
    qreal r_;

    static bool IsPointInCircle(const qreal &, const qreal &, const qreal &, const qreal &, const qreal &);
    static bool
    IsPointInRectangle(const qreal &, const qreal &, const qreal &, const qreal &, const qreal &, const qreal &);
};

#endif //LAB5_TASK3_H
