import QtQuick 2.0
import QtQuick.Controls 1.0

import io.qt.examples.task1 1.0

ApplicationWindow {
  visible: true
  width: 640
  height: 480
  title: qsTr("Lab5")

  Task1 {
    id: task1
  }

  TextField {
    text: qsTr(task1.outerRadius)
    placeholderText: qsTr("Введите внешний радиус кольца")
    anchors.centerIn: parent
    onTextChanged: task1.outerRadius = text
  }
}
