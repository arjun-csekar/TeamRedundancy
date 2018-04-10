/********************************************************************************
** Form generated from reading UI file 'newuserwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWUSERWINDOW_H
#define UI_NEWUSERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_NewUserWindow
{
public:
    QLabel *MessengerName;
    QLabel *Logo;
    QFrame *frame;
    QLabel *SignInLabel_3;
    QFrame *line_5;
    QLabel *UserNameLabel_3;
    QPlainTextEdit *UserNameBox_3;
    QPlainTextEdit *PasswordBox_3;
    QLabel *PasswordLabel_3;
    QPushButton *SignUpButton_3;
    QLabel *PasswordLabel_4;
    QPlainTextEdit *PasswordBox_4;

    void setupUi(QDialog *NewUserWindow)
    {
        if (NewUserWindow->objectName().isEmpty())
            NewUserWindow->setObjectName(QStringLiteral("NewUserWindow"));
        NewUserWindow->resize(400, 504);
        NewUserWindow->setStyleSheet(QStringLiteral("background-color: rgb(229, 255, 255);"));
        MessengerName = new QLabel(NewUserWindow);
        MessengerName->setObjectName(QStringLiteral("MessengerName"));
        MessengerName->setGeometry(QRect(140, 20, 241, 81));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        MessengerName->setFont(font);
        MessengerName->setAlignment(Qt::AlignCenter);
        MessengerName->setWordWrap(true);
        Logo = new QLabel(NewUserWindow);
        Logo->setObjectName(QStringLiteral("Logo"));
        Logo->setGeometry(QRect(30, 20, 71, 61));
        Logo->setPixmap(QPixmap(QString::fromUtf8(":/Images/Duck.png")));
        Logo->setScaledContents(true);
        frame = new QFrame(NewUserWindow);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(60, 110, 271, 331));
        frame->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Sunken);
        SignInLabel_3 = new QLabel(frame);
        SignInLabel_3->setObjectName(QStringLiteral("SignInLabel_3"));
        SignInLabel_3->setGeometry(QRect(10, 10, 51, 16));
        line_5 = new QFrame(frame);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setGeometry(QRect(10, 30, 231, 16));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        UserNameLabel_3 = new QLabel(frame);
        UserNameLabel_3->setObjectName(QStringLiteral("UserNameLabel_3"));
        UserNameLabel_3->setGeometry(QRect(10, 60, 71, 16));
        UserNameBox_3 = new QPlainTextEdit(frame);
        UserNameBox_3->setObjectName(QStringLiteral("UserNameBox_3"));
        UserNameBox_3->setGeometry(QRect(10, 80, 191, 31));
        UserNameBox_3->setFrameShape(QFrame::StyledPanel);
        UserNameBox_3->setFrameShadow(QFrame::Sunken);
        UserNameBox_3->setLineWidth(1);
        PasswordBox_3 = new QPlainTextEdit(frame);
        PasswordBox_3->setObjectName(QStringLiteral("PasswordBox_3"));
        PasswordBox_3->setGeometry(QRect(10, 140, 191, 31));
        PasswordLabel_3 = new QLabel(frame);
        PasswordLabel_3->setObjectName(QStringLiteral("PasswordLabel_3"));
        PasswordLabel_3->setGeometry(QRect(10, 120, 71, 16));
        SignUpButton_3 = new QPushButton(frame);
        SignUpButton_3->setObjectName(QStringLiteral("SignUpButton_3"));
        SignUpButton_3->setGeometry(QRect(20, 260, 75, 23));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        SignUpButton_3->setFont(font1);
        SignUpButton_3->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background-color: rgb(130, 255, 255);\n"
"color: rgb(255, 255, 255);"));
        PasswordLabel_4 = new QLabel(frame);
        PasswordLabel_4->setObjectName(QStringLiteral("PasswordLabel_4"));
        PasswordLabel_4->setGeometry(QRect(10, 180, 101, 16));
        PasswordBox_4 = new QPlainTextEdit(frame);
        PasswordBox_4->setObjectName(QStringLiteral("PasswordBox_4"));
        PasswordBox_4->setGeometry(QRect(10, 200, 191, 31));

        retranslateUi(NewUserWindow);

        QMetaObject::connectSlotsByName(NewUserWindow);
    } // setupUi

    void retranslateUi(QDialog *NewUserWindow)
    {
        NewUserWindow->setWindowTitle(QApplication::translate("NewUserWindow", "Dialog", nullptr));
        MessengerName->setText(QApplication::translate("NewUserWindow", "Duck Messaging Service", nullptr));
        Logo->setText(QString());
        SignInLabel_3->setText(QApplication::translate("NewUserWindow", "New User", nullptr));
        UserNameLabel_3->setText(QApplication::translate("NewUserWindow", "User Name:", nullptr));
        PasswordLabel_3->setText(QApplication::translate("NewUserWindow", "Password:", nullptr));
        SignUpButton_3->setText(QApplication::translate("NewUserWindow", "Create", nullptr));
        PasswordLabel_4->setText(QApplication::translate("NewUserWindow", "Re-Enter Password:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewUserWindow: public Ui_NewUserWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWUSERWINDOW_H
