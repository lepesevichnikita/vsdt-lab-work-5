import QtQuick 2.12
import QtQuick.Controls 1.0

ApplicationWindow {
  property int decimals: 2

  visible: true
  title: qsTr("Lab5")

  Column {
    padding: 40

    Text {
      text: qsTr("Точность")
    }

    TextField {
      text: decimals
      placeholderText: qsTr("Введите точность")
      inputMethodHints: Qt.ImhPreferNumbers
      onEditingFinished: {
        decimals = parseInt(text)
      }
    }

    Row {
      Task1 {
      }
    }

    Row {
      Task2 {}
    }
  }
}
