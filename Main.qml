import QtQuick
import QtQuick.Controls

Window {
    width: 320
    height: 240
    visible: true
    color: "darkgray"
    title: qsTr("Qt Demo")

    Column {
        anchors.centerIn: parent
        anchors.margins: 10
        spacing: 10

        TextField {
            id: op1
            placeholderText: "Op 1"
        }

        TextField {
            id: op2
            placeholderText: "Op 2"
        }

        Button {
            text: "Op1 + Op2!"

            onClicked: {
                console.log("HELLO => " + model.op1)
                displayLabel.text = parseInt(op1.text, 10) + parseInt(op2.text, 10)
            }
        }

        Text {
            id: displayLabel
            text: "RESULT WILL BE HERE"
        }

    }
}
