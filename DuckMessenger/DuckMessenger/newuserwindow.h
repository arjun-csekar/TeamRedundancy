#ifndef NEWUSERWINDOW_H
#define NEWUSERWINDOW_H

#include <QDialog>

namespace Ui {
class NewUserWindow;
}

class NewUserWindow : public QDialog
{
    Q_OBJECT

public:
    explicit NewUserWindow(QWidget *parent = 0);
    ~NewUserWindow();

private slots:
    void on_SignUpButton_3_clicked();

    void on_NewUserWindow_finished(int result);

private:
    Ui::NewUserWindow *ui;
};

#endif // NEWUSERWINDOW_H
