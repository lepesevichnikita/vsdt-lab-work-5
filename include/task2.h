//
// Created by nikital on 3/16/19.
//

#include <QObject>
#include <QFile>
#include <QJsonDocument>
#include <QDebug>

#ifndef LAB5_INCLUDE_TASK2_H
#define LAB5_INCLUDE_TASK2_H

class Task2: public QObject
{

Q_OBJECT
    Q_PROPERTY(QString
                   currentMonth
                   READ
                   currentMonth
                   WRITE
                   setCurrentMonth
                   NOTIFY
                   currentMonthChanged
    )

    Q_PROPERTY(QString currentMonthName
                   READ
                       currentMonthName
                   NOTIFY
                   currentMonthNameChanged)


public:
    explicit Task2(QObject *parent = nullptr);

    QString currentMonthName();
    QString currentMonth();

    void setCurrentMonth(QString const &);

signals:
    void currentMonthChanged();
    void currentMonthNameChanged();

private:
    QJsonDocument months_;
    QString currentMonth_;

    void initMonths();
};

#endif //LAB5_TASK2_H
