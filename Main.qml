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
        }

        Button {
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
}
