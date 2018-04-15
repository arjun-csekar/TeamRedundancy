/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
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
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWindow
{
public:
    QWidget *centralWidget;
    QStackedWidget *stackedWidget;
    QWidget *LoginPage;
    QLabel *MessengerName;
    QLabel *Logo;
    QFrame *frame;
    QLabel *LoginSignInLabel;
    QFrame *line_3;
    QLabel *LoginUserNameLabel;
    QPlainTextEdit *LoginUserNameBox;
    QPlainTextEdit *LoginPasswordBox;
    QLabel *LoginPasswordLabel;
    QPushButton *LoginSignInButton;
    QPushButton *LoginForgotButton;
    QFrame *line_4;
    QLabel *LoginNewUserLabel;
    QPushButton *LoginSignUpButton;
    QWidget *NewUserPage;
    QLabel *Logo_2;
    QFrame *frame_2;
    QLabel *NewSignInLabel;
    QFrame *line_6;
    QLabel *NewUserNameLabel;
    QPlainTextEdit *NewUserNameBox;
    QPlainTextEdit *NewPasswordBox;
    QLabel *NewPasswordLabel;
    QPushButton *NewSignUpButton;
    QLabel *NewPasswordLabelRe;
    QPlainTextEdit *NewPasswordBoxRe;
    QLabel *MessengerName_2;
    QWidget *page;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *LoginWindow)
    {
        if (LoginWindow->objectName().isEmpty())
            LoginWindow->setObjectName(QStringLiteral("LoginWindow"));
        LoginWindow->resize(645, 752);
        LoginWindow->setStyleSheet(QStringLiteral("background-color: rgb(229, 255, 255);"));
        centralWidget = new QWidget(LoginWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(120, 100, 401, 471));
        LoginPage = new QWidget();
        LoginPage->setObjectName(QStringLiteral("LoginPage"));
        MessengerName = new QLabel(LoginPage);
        MessengerName->setObjectName(QStringLiteral("MessengerName"));
        MessengerName->setGeometry(QRect(140, 30, 261, 81));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        MessengerName->setFont(font);
        MessengerName->setAlignment(Qt::AlignCenter);
        MessengerName->setWordWrap(true);
        Logo = new QLabel(LoginPage);
        Logo->setObjectName(QStringLiteral("Logo"));
        Logo->setGeometry(QRect(30, 30, 71, 61));
        Logo->setPixmap(QPixmap(QString::fromUtf8(":/Images/Duck.png")));
        Logo->setScaledContents(true);
        frame = new QFrame(LoginPage);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(60, 120, 271, 331));
        frame->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Sunken);
        LoginSignInLabel = new QLabel(frame);
        LoginSignInLabel->setObjectName(QStringLiteral("LoginSignInLabel"));
        LoginSignInLabel->setGeometry(QRect(10, 10, 47, 13));
        line_3 = new QFrame(frame);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(10, 30, 231, 16));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        LoginUserNameLabel = new QLabel(frame);
        LoginUserNameLabel->setObjectName(QStringLiteral("LoginUserNameLabel"));
        LoginUserNameLabel->setGeometry(QRect(10, 60, 71, 16));
        LoginUserNameBox = new QPlainTextEdit(frame);
        LoginUserNameBox->setObjectName(QStringLiteral("LoginUserNameBox"));
        LoginUserNameBox->setGeometry(QRect(10, 80, 191, 31));
        LoginUserNameBox->setFrameShape(QFrame::StyledPanel);
        LoginUserNameBox->setFrameShadow(QFrame::Sunken);
        LoginUserNameBox->setLineWidth(1);
        LoginPasswordBox = new QPlainTextEdit(frame);
        LoginPasswordBox->setObjectName(QStringLiteral("LoginPasswordBox"));
        LoginPasswordBox->setGeometry(QRect(10, 140, 191, 31));
        LoginPasswordLabel = new QLabel(frame);
        LoginPasswordLabel->setObjectName(QStringLiteral("LoginPasswordLabel"));
        LoginPasswordLabel->setGeometry(QRect(10, 120, 71, 16));
        LoginSignInButton = new QPushButton(frame);
        LoginSignInButton->setObjectName(QStringLiteral("LoginSignInButton"));
        LoginSignInButton->setGeometry(QRect(20, 180, 75, 23));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        LoginSignInButton->setFont(font1);
        LoginSignInButton->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background-color: teal;\n"
"color: rgb(255, 255, 255);"));
        LoginForgotButton = new QPushButton(frame);
        LoginForgotButton->setObjectName(QStringLiteral("LoginForgotButton"));
        LoginForgotButton->setGeometry(QRect(10, 210, 101, 23));
        QFont font2;
        font2.setUnderline(true);
        LoginForgotButton->setFont(font2);
        LoginForgotButton->setStyleSheet(QLatin1String("color: rgb(85, 0, 255);\n"
"background-color: rgb(255, 255, 255);"));
        line_4 = new QFrame(frame);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(10, 240, 231, 16));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        LoginNewUserLabel = new QLabel(frame);
        LoginNewUserLabel->setObjectName(QStringLiteral("LoginNewUserLabel"));
        LoginNewUserLabel->setGeometry(QRect(10, 270, 47, 13));
        LoginSignUpButton = new QPushButton(frame);
        LoginSignUpButton->setObjectName(QStringLiteral("LoginSignUpButton"));
        LoginSignUpButton->setGeometry(QRect(20, 290, 75, 23));
        LoginSignUpButton->setFont(font1);
        LoginSignUpButton->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background-color: teal;\n"
"color: rgb(255, 255, 255);"));
        stackedWidget->addWidget(LoginPage);
        NewUserPage = new QWidget();
        NewUserPage->setObjectName(QStringLiteral("NewUserPage"));
        Logo_2 = new QLabel(NewUserPage);
        Logo_2->setObjectName(QStringLiteral("Logo_2"));
        Logo_2->setGeometry(QRect(30, 30, 71, 61));
        Logo_2->setPixmap(QPixmap(QString::fromUtf8(":/Images/Duck.png")));
        Logo_2->setScaledContents(true);
        frame_2 = new QFrame(NewUserPage);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(60, 120, 271, 331));
        frame_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        frame_2->setFrameShape(QFrame::Box);
        frame_2->setFrameShadow(QFrame::Sunken);
        NewSignInLabel = new QLabel(frame_2);
        NewSignInLabel->setObjectName(QStringLiteral("NewSignInLabel"));
        NewSignInLabel->setGeometry(QRect(10, 10, 51, 16));
        line_6 = new QFrame(frame_2);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setGeometry(QRect(10, 30, 231, 16));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);
        NewUserNameLabel = new QLabel(frame_2);
        NewUserNameLabel->setObjectName(QStringLiteral("NewUserNameLabel"));
        NewUserNameLabel->setGeometry(QRect(10, 60, 71, 16));
        NewUserNameBox = new QPlainTextEdit(frame_2);
        NewUserNameBox->setObjectName(QStringLiteral("NewUserNameBox"));
        NewUserNameBox->setGeometry(QRect(10, 80, 191, 31));
        NewUserNameBox->setFrameShape(QFrame::StyledPanel);
        NewUserNameBox->setFrameShadow(QFrame::Sunken);
        NewUserNameBox->setLineWidth(1);
        NewPasswordBox = new QPlainTextEdit(frame_2);
        NewPasswordBox->setObjectName(QStringLiteral("NewPasswordBox"));
        NewPasswordBox->setGeometry(QRect(10, 140, 191, 31));
        NewPasswordLabel = new QLabel(frame_2);
        NewPasswordLabel->setObjectName(QStringLiteral("NewPasswordLabel"));
        NewPasswordLabel->setGeometry(QRect(10, 120, 71, 16));
        NewSignUpButton = new QPushButton(frame_2);
        NewSignUpButton->setObjectName(QStringLiteral("NewSignUpButton"));
        NewSignUpButton->setGeometry(QRect(20, 260, 75, 23));
        NewSignUpButton->setFont(font1);
        NewSignUpButton->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background-color: teal;\n"
"color: rgb(255, 255, 255);"));
        NewPasswordLabelRe = new QLabel(frame_2);
        NewPasswordLabelRe->setObjectName(QStringLiteral("NewPasswordLabelRe"));
        NewPasswordLabelRe->setGeometry(QRect(10, 180, 101, 16));
        NewPasswordBoxRe = new QPlainTextEdit(frame_2);
        NewPasswordBoxRe->setObjectName(QStringLiteral("NewPasswordBoxRe"));
        NewPasswordBoxRe->setGeometry(QRect(10, 200, 191, 31));
        MessengerName_2 = new QLabel(NewUserPage);
        MessengerName_2->setObjectName(QStringLiteral("MessengerName_2"));
        MessengerName_2->setGeometry(QRect(140, 30, 241, 81));
        MessengerName_2->setFont(font);
        MessengerName_2->setAlignment(Qt::AlignCenter);
        MessengerName_2->setWordWrap(true);
        stackedWidget->addWidget(NewUserPage);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        stackedWidget->addWidget(page);
        LoginWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(LoginWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 645, 20));
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
        LoginWindow->setWindowTitle(QApplication::translate("LoginWindow", "Duck Messenger", Q_NULLPTR));
        MessengerName->setText(QApplication::translate("LoginWindow", "Duck Messaging Service", Q_NULLPTR));
        Logo->setText(QString());
        LoginSignInLabel->setText(QApplication::translate("LoginWindow", "Sign In", Q_NULLPTR));
        LoginUserNameLabel->setText(QApplication::translate("LoginWindow", "User Name:", Q_NULLPTR));
        LoginPasswordLabel->setText(QApplication::translate("LoginWindow", "Password:", Q_NULLPTR));
        LoginSignInButton->setText(QApplication::translate("LoginWindow", "SIGN IN", Q_NULLPTR));
        LoginForgotButton->setText(QApplication::translate("LoginWindow", "Forgot Password?", Q_NULLPTR));
        LoginNewUserLabel->setText(QApplication::translate("LoginWindow", "New User", Q_NULLPTR));
        LoginSignUpButton->setText(QApplication::translate("LoginWindow", "SIGN UP", Q_NULLPTR));
        Logo_2->setText(QString());
        NewSignInLabel->setText(QApplication::translate("LoginWindow", "New User", Q_NULLPTR));
        NewUserNameLabel->setText(QApplication::translate("LoginWindow", "User Name:", Q_NULLPTR));
        NewPasswordLabel->setText(QApplication::translate("LoginWindow", "Password:", Q_NULLPTR));
        NewSignUpButton->setText(QApplication::translate("LoginWindow", "Create", Q_NULLPTR));
        NewPasswordLabelRe->setText(QApplication::translate("LoginWindow", "Re-Enter Password:", Q_NULLPTR));
        MessengerName_2->setText(QApplication::translate("LoginWindow", "Duck Messaging Service", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LoginWindow: public Ui_LoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
