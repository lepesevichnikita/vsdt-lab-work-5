import QtQuick 2.7
import QtQuick.Controls 2.5
import QtQuick.Layouts 1.3

ApplicationWindow {
  property int inputMinimumHeight: 20
  minimumWidth: 240
  minimumHeight: 320

  visible: true
  title: qsTr("Lab5")

  footer: TabBar {
    id: bar
    width: parent.width

    TabButton {
      text: qsTr("Первое задание")
    }

    TabButton {
      text: qsTr("Второе задание")
    }
  }

  StackLayout {
    anchors.fill: parent
    currentIndex: bar.currentIndex

    Item {
      Task1 {}
    }

    Item {
      Task2 {}
    }
  }
}
