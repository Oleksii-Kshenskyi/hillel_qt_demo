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
            onTextChanged: {
                controller.setOp1(op1.text)
            }
            background: Rectangle {
                id: op1Background
                width: op1.width
                height: op1.height

                border.color: "transparent"
                border.width: 1
            }
        }

        ComboBox {
            id: operation
            model: ["+", "-", "*", "/"]
            onCurrentValueChanged: {
                controller.setOperation(operation.currentValue)
            }
        }

        TextField {
            id: op2
            placeholderText: "Op 2"
            onTextChanged: {
                controller.setOp2(op2.text)
            }
            background: Rectangle {
                id: op2Background
                width: op2.width
                height: op2.height

                border.color: "transparent"
                border.width: 1
            }
        }

        Button {
            id: calculateButton
            text: "Op1 + Op2!"

            onClicked: {
                displayLabel.text = controller.performOperation()
            }
        }

        Text {
            id: displayLabel
            text: "RESULT WILL BE HERE"
        }

    }



    Connections {
        target: model
        function onOp1ValidChanged(opv_new) {
            op1Background.border.color = opv_new ? "transparent" : "red"
            calculateButton.enabled = model.op1Valid && model.op2Valid
        }

        function onOp2ValidChanged(opv_new) {
            op2Background.border.color = opv_new ? "transparent" : "red"
            calculateButton.enabled = model.op1Valid && model.op2Valid
        }
    }
}
