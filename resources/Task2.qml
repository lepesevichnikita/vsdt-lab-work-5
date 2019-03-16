import QtQuick 2.12
import QtQuick.Controls 1.0

import io.qt.examples.task2 1.0

Column {
  padding: 20

  id: root

  Task2 {
    id: task2
  }


  TextField {
      text: task2.currentMonth
      placeholderText: qsTr("Введите номер месяца")
      onEditingFinished: task2.currentMonth = text
  }

  Text {
      text: qsTr("Месяц")
  }

  Text {
      text: task2.currentMonthName
  }

}
