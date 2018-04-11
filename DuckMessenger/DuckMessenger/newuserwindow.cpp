#include "newuserwindow.h"
#include "ui_newuserwindow.h"

NewUserWindow::NewUserWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NewUserWindow)
{
    ui->setupUi(this);
}

NewUserWindow::~NewUserWindow()
{
    delete ui;
}

void NewUserWindow::on_SignUpButton_3_clicked()
{
    parentWidget()->show();
    this->close();
}
