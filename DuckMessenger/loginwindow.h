#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QMainWindow>
#include <string>
#include <QTcpSocket>
#include <QAbstractSocket>

namespace Ui {
class LoginWindow;
}

class LoginWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit LoginWindow(QWidget *parent = 0);
    ~LoginWindow();
    void Test();

public slots:
    void connected();
    void disconnected();
    void bytesWritten(qint64 bytes);
    void readyRead();
    bool setData(QString);
    void loginwait(QString);
    bool checkUser(QString);

private slots:
    void on_LoginSignUpButton_clicked();
    void on_NewSignUpButton_clicked();
    void on_LoginSignInButton_clicked();
    void on_Logout_clicked();

    void on_Send_clicked();

private:
    Ui::LoginWindow *ui;
    QTcpSocket *socket;
};

#endif // LOGINWINDOW_H
