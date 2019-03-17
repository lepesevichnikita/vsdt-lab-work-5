import QtQuick 2.7
import QtQuick.Controls 2.5
import QtQuick.Layouts 1.3

import io.qt.examples.task1 1.0

ColumnLayout {
  property int decimals: 2

  id: root

  anchors.fill: parent
  anchors.margins: 20

  Task1 {
    id: task1
    onOuterRadiusChanged: task1.calculateAreaOfRing()
    onInterRadiusChanged: task1.calculateAreaOfRing()
  }

  Label {
    Layout.fillWidth: true
    text: qsTr("Точность")
  }

  TextField {
    Layout.fillWidth: true

    text: parent.decimals
    placeholderText: qsTr("Введите точность")
    inputMethodHints: Qt.ImhPreferNumbers
    onEditingFinished: {
      parent.decimals = parseInt(text)
    }
  }

  Label {
    Layout.fillWidth: true
    text: qsTr("Внешний радиус кольца")
  }

  TextField {
    Layout.fillWidth: true

    text: task1.outerRadius.toFixed(parent.decimals)
    placeholderText: qsTr("Введите внешний радиус кольца")
    inputMethodHints: Qt.ImhPreferNumbers
    onEditingFinished: {
      task1.outerRadius = parseFloat(text).toFixed(parent.decimals)
    }
  }

  Label {
    Layout.fillWidth: true
    text: qsTr("Внутренний радиус кольца")
  }

  TextField {
    Layout.fillWidth: true

    text: task1.interRadius.toFixed(parent.decimals)
    placeholderText: qsTr("Введите внутренний радиус кольца")
    inputMethodHints: Qt.ImhPreferNumbers
    onEditingFinished: {
      task1.interRadius = parseFloat(text).toFixed(parent.decimals)
    }
  }

  Label {
    Layout.fillWidth: true

    text: qsTr("Площадь кольца")
  }

  TextField {
    Layout.fillWidth: true

    readOnly: true
    text: task1.areaOfRing.toFixed(parent.decimals)
    placeholderText: qsTr("Площадь кольца")
  }

}
