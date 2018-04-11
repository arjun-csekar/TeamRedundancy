#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QMainWindow>
#include "newuserwindow.h"

namespace Ui {
class LoginWindow;
}

class LoginWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit LoginWindow(QWidget *parent = 0);
    ~LoginWindow();

private slots:
    void on_SignUpButton_clicked();

private:
    Ui::LoginWindow *ui;
    NewUserWindow *newuser;
};

#endif // LOGINWINDOW_H
