#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QMainWindow>

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
    void on_LoginSignUpButton_clicked();
    void on_NewSignUpButton_clicked();
    void on_LoginSignInButton_clicked();
    void on_Logout_clicked();

    void on_Send_clicked();

private:
    Ui::LoginWindow *ui;
};

#endif // LOGINWINDOW_H
