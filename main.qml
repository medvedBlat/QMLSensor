import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.5
import QtQuick.Controls.Material 2.12

Window {
    visible: true
    width: 420
    height: 230
    color: "#1f2020"
    title: qsTr("Sensor")

    property int speed_disk: slider.value
    property int rashod_gaza: slider1.value
    property int davlenie_gaza: slider2.value
    property bool on_off_disk: element.checked
    property bool argon_azot: element1.checked
    Connections {
    target: inter
    }

    Slider {
        id: slider
        x: -20
        y: 16
        width: 300
        height: 20
        scale: 0.7
        stepSize: 0
        to: 100
        transformOrigin: Item.Center
        value: 0
        onValueChanged: inter.setSpeed_disk(speed_disk)
    }



    Slider {
        id: slider1
        x: -20
        y: 62
        width: 300
        height: 20
        scale: 0.7
        to: 100
        font.pointSize: 11
        value: 0
        onValueChanged: inter.setRashod_gaza(rashod_gaza)
    }

    Slider {
        id: slider2
        x: -20
        y: 105
        width: 300
        height: 20
        scale: 0.7
        font.weight: Font.Normal
        font.pointSize: 10
        to: 100
        value: 0
        onValueChanged: inter.setDavlenie_gaza(davlenie_gaza)
    }

    Label {
        id: label
        x: 36
        y: 39
        color: "#f6f4f3"
        text: qsTr("Скорость вращения доз. диска")
        styleColor: "#e1d1d1"
    }

    Label {
        id: label1
        x: 45
        y: 82
        color: "#f5f5f5"
        text: qsTr("Расход газа с шагом 1л/мин")
        styleColor: "#f8f6f6"
    }

    Label {
        id: label2
        x: 86
        y: 125
        color: "#eceef1"
        text: qsTr("Давление газа")
    }

    Switch {
        id: element
        x: 20
        y: 184
        width: 37
        height: 25
        text: qsTr("")
        hoverEnabled: true
        enabled: true
        checkable: true
        checked: false
        scale: 0.5
        onCheckedChanged: inter.setOn_off_disk(on_off_disk)
    }

    Switch {
        id: element1
        x: 20
        y: 153
        width: 37
        height: 25
        text: ""
        checkable: true
        checked: false
        scale: 0.5
        onCheckedChanged: inter.setArgon_azot(argon_azot)
    }

    Label {
        id: label3
        x: 68
        y: 155
        color: "#f2f3f3"
        text: qsTr("Выкл/Вкл вращ. доз. диска")
    }

    Label {
        id: label4
        x: 68
        y: 188
        color: "#f2f3f4"
        text: qsTr("Аргон/Азот")
    }

    TextEdit {
        id: textEdit
        x: 249
        y: 19
        width: 41
        height: 20
        color: "#efeaea"
        text: slider.value.toFixed(1)
        horizontalAlignment: Text.AlignHCenter
        font.pixelSize: 12
    }

    TextEdit {
        id: textEdit1
        x: 249
        y: 65
        width: 41
        height: 20
        color: "#efeaea"
        text: slider1.value.toFixed(1)
        horizontalAlignment: Text.AlignHCenter
        font.pixelSize: 12
    }

    TextEdit {
        id: textEdit2
        x: 249
        y: 108
        width: 41
        height: 20
        color: "#efeaea"
        text: slider2.value.toFixed(1)
        horizontalAlignment: Text.AlignHCenter
        font.pixelSize: 12
    }
}
