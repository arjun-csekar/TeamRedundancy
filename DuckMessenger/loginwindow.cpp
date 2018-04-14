#include "loginwindow.h"
#include "ui_loginwindow.h"


LoginWindow::LoginWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);

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
