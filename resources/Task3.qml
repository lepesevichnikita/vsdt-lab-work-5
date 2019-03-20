import QtQuick 2.7
import QtQuick.Controls 2.5
import QtQuick.Layouts 1.3

import io.qt.examples.task3 1.0

ColumnLayout {
    id: root

    property int decimals: 2

    anchors.fill: parent
    anchors.margins: 20

    Task3 {
        id: task3
    }

    Label {
        Layout.fillWidth: true
        wrapMode: Text.Wrap
        text: qsTr("Введите координаты точки, чтобы проверить, попадает ли она в заданную область")
    }

    Image {
        source: "/images/task3area.png"
    }

    Label {
        Layout.fillWidth: true
        text: qsTr("X")
    }

    TextField {
        Layout.fillWidth: true
        Layout.fillHeight: true

        placeholderText: qsTr("Введите X")
        text: task3.x
        onEditingFinished: task3.x = parseFloat(text).toFixed(decimals)
    }

    Label {
        Layout.fillWidth: true
        text: qsTr("Y")
    }

    TextField {
        Layout.fillWidth: true
        Layout.fillHeight: true

        placeholderText: qsTr("Введите Y")
        text: task3.y
        onEditingFinished: task3.y = parseFloat(text).toFixed(decimals)
    }

    Label {
        Layout.fillWidth: true
        text: qsTr("R")
    }

    TextField {
        Layout.fillWidth: true
        Layout.fillHeight: true

        placeholderText: qsTr("Введите R")
        text: task3.r
        onEditingFinished: task3.r = parseFloat(text).toFixed(decimals)
    }

    Label {
        Layout.fillWidth: true
        wrapMode: Text.Wrap
        text: task3.result ? qsTr("Точка находится в заданной области") : qsTr("Точка не находится в заданной области")
    }
}