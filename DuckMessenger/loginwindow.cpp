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
    QString username = ui->NewUserNameBox->toPlainText();
    QString password = ui->NewPasswordBox->toPlainText();
    QString password2 = ui->NewPasswordBoxRe->toPlainText();

    if (password == password2) {
        if (db.open()) {
            QSqlQuery query;
            query.prepare("INSERT INTO userprofile (userName, password) " "VALUES (:un, :pw)");
            query.bindValue(":un", username);
            query.bindValue(":pw", password);
            query.exec();
        } else {
            qDebug() << "Failed to connect to database";
            qDebug() << db.lastError();
        }
        ui->stackedWidget->setCurrentIndex(0);
    } else {

        ui->NewUserNameBox->setPlainText("STOP");

    }
}

void LoginWindow::on_LoginSignInButton_clicked()
{
    QString username = ui->LoginUserNameBox->toPlainText();
    QString password = ui->LoginPasswordBox->toPlainText();
    if (db.open()) {
        QSqlQuery query;
        query.prepare("SELECT * FROM userprofile WHERE userName=:un");
        query.bindValue(":un", username);
        query.exec();

        qDebug() << query.first();

        if (password != query.value("password")) {
            ui->LoginUserNameBox->setPlainText("WRONG");
        } else {
            ui->stackedWidget->setCurrentIndex(2);
        }
    }


}
