//
// Created by nikital on 3/16/19.
//

#include "task2.h"

Task2::Task2(QObject *parent)
    :
    QObject(parent)
{
    initMonths();
}

QString Task2::currentMonthName()
{
    return months_[currentMonth_].toString();
}

void Task2::initMonths()
{
    QFile file("://json/months.json");
    file.open(QIODevice::ReadOnly);
    months_ = QJsonDocument::fromJson(file.readAll());
    file.close();
}

QString Task2::currentMonth()
{
    return currentMonth_;
}

void Task2::setCurrentMonth(QString const &currentMonth)
{
    if (currentMonth == currentMonth_)
        return;
    currentMonth_ = currentMonth;
    emit currentMonthChanged();
    emit currentMonthNameChanged();
}
