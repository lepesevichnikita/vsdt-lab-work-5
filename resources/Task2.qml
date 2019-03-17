import QtQuick 2.7
import QtQuick.Controls 2.5
import QtQuick.Layouts 1.3

import io.qt.examples.task2 1.0

ColumnLayout {
  id: root

  anchors.fill: parent
  anchors.margins: 20

  Task2 {
    id: task2
  }

  TextField {
      Layout.fillWidth: true
      Layout.fillHeight: true

      text: task2.currentMonth
      placeholderText: qsTr("Введите номер месяца")
      onEditingFinished: task2.currentMonth = text
  }

  Label {
      Layout.fillWidth: true
      text: [qsTr("Месяц"), ":", qsTr(task2.currentMonthName)].join(" ")
  }
}
