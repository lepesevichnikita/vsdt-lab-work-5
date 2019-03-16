#ifndef LAB5_INCLUDE_TASK1_H
#define LAB5_INCLUDE_TASK1_H

#include <QObject>
#include <QString>

class Task1 : public QObject {
 Q_OBJECT
  Q_PROPERTY(QString outerRadius
                 READ outerRadius
                 WRITE setOuterRadius
                 NOTIFY
                 outerRadiusChanged)

 public:
  explicit Task1(QObject *parent = nullptr);

  QString outerRadius();
  void setOuterRadius(const QString &);

 signals:
  void outerRadiusChanged();

 private:
  QString outer_radius_;
};

#endif
