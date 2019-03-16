#ifndef LAB5_INCLUDE_TASK1_H
#define LAB5_INCLUDE_TASK1_H

#include <QObject>
#include <QString>
#include <QtMath>
#include <QDebug>

class Task1: public QObject
{
Q_OBJECT
    Q_PROPERTY(qreal outerRadius
                   READ outerRadius
                   WRITE setOuterRadius
                   NOTIFY
                   outerRadiusChanged)

    Q_PROPERTY(qreal interRadius
                   READ
                       interRadius
                   WRITE
                       setInterRadius
                   NOTIFY
                   interRadiusChanged)

    Q_PROPERTY(qreal
                   areaOfRing
                   READ
                   areaOfRing
                   NOTIFY
                   areaOfRingChanged
    )

public:
    explicit Task1(QObject *parent = nullptr);

    qreal outerRadius();
    qreal interRadius();
    qreal areaOfRing();

    void setOuterRadius(const qreal &);
    void setInterRadius(const qreal &);

signals:
    void outerRadiusChanged();
    void interRadiusChanged();
    void areaOfRingChanged();

public slots:
    void calculateAreaOfRing();

private:
    qreal outer_radius_;
    qreal inter_radius_;
    qreal area_of_ring_;

    static inline qreal calculateAreaOfCircle(const qreal radius)
    {
        return M_PI * qPow(radius, 2);
    }
};

#endif
