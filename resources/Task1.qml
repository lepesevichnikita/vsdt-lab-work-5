import QtQuick 2.12
import QtQuick.Controls 1.0

import io.qt.examples.task1 1.0

Column {
  id: root
  padding: 20

  Task1 {
    id: task1
    onOuterRadiusChanged: task1.calculateAreaOfRing()
    onInterRadiusChanged: task1.calculateAreaOfRing()
  }

  Text {
    text: qsTr("Внешний радиус кольца")
  }

  TextField {
    text: task1.outerRadius.toFixed(decimals)
    placeholderText: qsTr("Введите внешний радиус кольца")
    inputMethodHints: Qt.ImhPreferNumbers
    onEditingFinished: {
      task1.outerRadius = parseFloat(text).toFixed(decimals)
    }
  }

  Text {
    text: qsTr("Внутренний радиус кольца")
  }

  TextField {
    text: task1.interRadius.toFixed(decimals)
    placeholderText: qsTr("Введите внутренний радиус кольца")
    inputMethodHints: Qt.ImhPreferNumbers
    onEditingFinished: {
      task1.interRadius = parseFloat(text).toFixed(decimals)
    }
  }

  Text {
    text: qsTr("Площадь кольца")
  }

  TextField {
    readOnly: true
    text: task1.areaOfRing.toFixed(decimals)
    placeholderText: qsTr("Площадь кольца")
  }

}