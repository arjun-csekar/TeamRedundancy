/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWindow
{
public:
    QWidget *centralWidget;
    QLabel *MessengerName;
    QFrame *frame;
    QLabel *SignInLabel;
    QFrame *line;
    QLabel *UserNameLabel;
    QPlainTextEdit *UserNameBox;
    QPlainTextEdit *PasswordBox;
    QLabel *PasswordLabel;
    QPushButton *SignInButton;
    QPushButton *ForgotButton;
    QFrame *line_2;
    QLabel *NewUserLabel;
    QPushButton *SignUpButton;
    QLabel *Logo;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *LoginWindow)
    {
        if (LoginWindow->objectName().isEmpty())
            LoginWindow->setObjectName(QStringLiteral("LoginWindow"));
        LoginWindow->resize(400, 504);
        LoginWindow->setStyleSheet(QStringLiteral("background-color: rgb(229, 255, 255);"));
        centralWidget = new QWidget(LoginWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        MessengerName = new QLabel(centralWidget);
        MessengerName->setObjectName(QStringLiteral("MessengerName"));
        MessengerName->setGeometry(QRect(140, 10, 241, 81));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        MessengerName->setFont(font);
        MessengerName->setAlignment(Qt::AlignCenter);
        MessengerName->setWordWrap(true);
        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(60, 100, 271, 331));
        frame->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Sunken);
        SignInLabel = new QLabel(frame);
        SignInLabel->setObjectName(QStringLiteral("SignInLabel"));
        SignInLabel->setGeometry(QRect(10, 10, 47, 13));
        line = new QFrame(frame);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(10, 30, 231, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        UserNameLabel = new QLabel(frame);
        UserNameLabel->setObjectName(QStringLiteral("UserNameLabel"));
        UserNameLabel->setGeometry(QRect(10, 60, 71, 16));
        UserNameBox = new QPlainTextEdit(frame);
        UserNameBox->setObjectName(QStringLiteral("UserNameBox"));
        UserNameBox->setGeometry(QRect(10, 80, 191, 31));
        UserNameBox->setFrameShape(QFrame::StyledPanel);
        UserNameBox->setFrameShadow(QFrame::Sunken);
        UserNameBox->setLineWidth(1);
        PasswordBox = new QPlainTextEdit(frame);
        PasswordBox->setObjectName(QStringLiteral("PasswordBox"));
        PasswordBox->setGeometry(QRect(10, 140, 191, 31));
        PasswordLabel = new QLabel(frame);
        PasswordLabel->setObjectName(QStringLiteral("PasswordLabel"));
        PasswordLabel->setGeometry(QRect(10, 120, 71, 16));
        SignInButton = new QPushButton(frame);
        SignInButton->setObjectName(QStringLiteral("SignInButton"));
        SignInButton->setGeometry(QRect(20, 180, 75, 23));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        SignInButton->setFont(font1);
        SignInButton->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background-color: rgb(130, 255, 255);\n"
"color: rgb(255, 255, 255);"));
        ForgotButton = new QPushButton(frame);
        ForgotButton->setObjectName(QStringLiteral("ForgotButton"));
        ForgotButton->setGeometry(QRect(10, 210, 101, 23));
        QFont font2;
        font2.setUnderline(true);
        ForgotButton->setFont(font2);
        ForgotButton->setStyleSheet(QLatin1String("color: rgb(85, 0, 255);\n"
"background-color: rgb(255, 255, 255);"));
        line_2 = new QFrame(frame);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(10, 240, 231, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        NewUserLabel = new QLabel(frame);
        NewUserLabel->setObjectName(QStringLiteral("NewUserLabel"));
        NewUserLabel->setGeometry(QRect(10, 270, 47, 13));
        SignUpButton = new QPushButton(frame);
        SignUpButton->setObjectName(QStringLiteral("SignUpButton"));
        SignUpButton->setGeometry(QRect(20, 290, 75, 23));
        SignUpButton->setFont(font1);
        SignUpButton->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background-color: rgb(130, 255, 255);\n"
"color: rgb(255, 255, 255);"));
        Logo = new QLabel(centralWidget);
        Logo->setObjectName(QStringLiteral("Logo"));
        Logo->setGeometry(QRect(30, 10, 71, 61));
        Logo->setPixmap(QPixmap(QString::fromUtf8(":/Images/Duck.png")));
        Logo->setScaledContents(true);
        LoginWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(LoginWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 21));
        LoginWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(LoginWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        LoginWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(LoginWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        LoginWindow->setStatusBar(statusBar);

        retranslateUi(LoginWindow);

        QMetaObject::connectSlotsByName(LoginWindow);
    } // setupUi

    void retranslateUi(QMainWindow *LoginWindow)
    {
        LoginWindow->setWindowTitle(QApplication::translate("LoginWindow", "Duck Messenger", nullptr));
        MessengerName->setText(QApplication::translate("LoginWindow", "Duck Messaging Service", nullptr));
        SignInLabel->setText(QApplication::translate("LoginWindow", "Sign In", nullptr));
        UserNameLabel->setText(QApplication::translate("LoginWindow", "User Name:", nullptr));
        PasswordLabel->setText(QApplication::translate("LoginWindow", "Password:", nullptr));
        SignInButton->setText(QApplication::translate("LoginWindow", "SIGN IN", nullptr));
        ForgotButton->setText(QApplication::translate("LoginWindow", "Forgot Password?", nullptr));
        NewUserLabel->setText(QApplication::translate("LoginWindow", "New User", nullptr));
        SignUpButton->setText(QApplication::translate("LoginWindow", "SIGN UP", nullptr));
        Logo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LoginWindow: public Ui_LoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
