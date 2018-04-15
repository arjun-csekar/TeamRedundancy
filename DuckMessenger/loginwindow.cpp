#include "loginwindow.h"
#include "ui_loginwindow.h"
#include <QtSql>
#include <QsqlDatabase>
#include <QDebug>

QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");

LoginWindow::LoginWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
    db.setHostName("localhost");
    db.setUserName("root");
    db.setPassword("password");
    db.setDatabaseName("duckdb");
}

LoginWindow::~LoginWindow()
{
    delete ui;
}

void LoginWindow::on_LoginSignUpButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void LoginWindow::on_NewSignUpButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void LoginWindow::on_LoginSignInButton_clicked()
{
    if (db.open()) {
        //query.exec("INSERT INTO ");
    } else {
        qDebug() << "Failed to connect to database";
        qDebug() << db.lastError();
    }
}
