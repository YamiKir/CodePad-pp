import QtQuick
import QtQuick.Window
import QtQuick.Controls 2.12


Window {
    width: Screen.width
    height: Screen.height
    visible: true
    color: "#DF2093"
    title: qsTr("CodePad")
    signal textUpdated(string newText)

        ScrollView{
            anchors.centerIn: parent
            width: 600
            height:600
        TextArea {
            id: main_textArea
            objectName: "mainTextArea"
                   textFormat: Qt.PlainText
                   focus: true
                   selectByMouse: true
                   selectByKeyboard: true
            placeholderText: qsTr("Enter text into CodePad++ !")
            onTextChanged: {
                Window.textUpdated(text)
            }

        }

        }




}



