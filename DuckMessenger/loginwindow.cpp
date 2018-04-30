#include "loginwindow.h"
#include "ui_loginwindow.h"
#include <QtSql>
#include <QsqlDatabase>
#include <QDebug>
#include <QMessageBox>

QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
QString userID;

LoginWindow::LoginWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
    this->setFixedSize(645,752);
    ui->stackedWidget->setCurrentIndex(0);
    db.setHostName("localhost");
    db.setUserName("root");
    db.setPassword("password");
    db.setDatabaseName("duckdb");
    Test();
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
        QString msg = username + ":" + password + ":NewUser";
        setData(msg);

//        if (db.open()) {
//            QSqlQuery query;
//            query.prepare("INSERT INTO userprofile (userName, password, socketNum) " "VALUES (:un, :pw, :so)");
//            query.bindValue(":un", username);
//            query.bindValue(":pw", password);
//            query.bindValue(":so", 123);
//            query.exec();
//        } else {
//            qDebug() << "Failed to connect to database";
//            qDebug() << db.lastError();
//        }
        ui->stackedWidget->setCurrentIndex(0);
    } else {

        ui->NewUserNameBox->setPlainText("STOP");

    }
}

void LoginWindow::on_LoginSignInButton_clicked()
{
    QString username = ui->LoginUserNameBox->toPlainText();
    QString password = ui->LoginPasswordBox->toPlainText();

    QString msg = username + ":" + password + ":Login";
    setData(msg);

//    if (db.open()) {
//        QSqlQuery query;
//        query.prepare("SELECT * FROM userprofile WHERE userName=:un");
//        query.bindValue(":un", username);
//        query.exec();

//        qDebug() << query.first();

//        if (password != query.value("password")) {
//            ui->LoginUserNameBox->setPlainText("WRONG");
//        } else {
//            userID = ui->LoginUserNameBox->toPlainText();
//            ui->stackedWidget->setCurrentIndex(2);
//        }
//    }
}

void LoginWindow::on_Logout_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void LoginWindow::on_Send_clicked()
{
    //QSqlQuery query;
   //ui->ChatBox->append((userID) + ": " + ui->ChatText->toPlainText());
    socket->write((userID + " : " + ui->ChatText->toPlainText()).toLocal8Bit());
}

void LoginWindow::Test()
{
    socket = new QTcpSocket(this);
    connect(socket, SIGNAL(connected()), this, SLOT(connected()));
    connect(socket, SIGNAL(disconnected()), this, SLOT(disconnected()));
    connect(socket, SIGNAL(readyRead()), this, SLOT(readyRead()));
    connect(socket, SIGNAL(bytesWritten(qint64)), this, SLOT(bytesWritten(qint64)));

    qDebug() << "Connecting,..";

    socket->connectToHost("127.0.0.1", 1234);

   /* if(!socket->waitForDisconnected(1000))
    {
        qDebug() << "Error: " << socket->errorString();
    }*/

}

void LoginWindow::connected()
{
    qDebug() << "Connected!";

   // socket->write("HEAD / HTTP/1.0\r\n\r\n\r\n\r\n");
}

void LoginWindow::disconnected()
{
    qDebug() << "Disconnected!";
}

void LoginWindow::bytesWritten(qint64 bytes)
{
    qDebug() << "We wrote: " << bytes;
}

void LoginWindow::readyRead()
{
    qDebug() << "Reading...";

    QString msg = QString::fromUtf8(socket->readAll());
    qDebug() << msg;

    if(msg == "true"){
        userID = ui->LoginUserNameBox->toPlainText();

        ui->stackedWidget->setCurrentIndex(2);
        ui->listWidget->addItem(userID);
    }
    else if(msg == "false"){
        QMessageBox messageBox;
        messageBox.warning(0, "Invalid", "Invalid Username or Password");
        messageBox.setFixedSize(500,200);
        ui->LoginUserNameBox->clear();
        ui->LoginPasswordBox->clear();
    }
    else{
        QStringList pieces = QString(msg).split(":");

        if(!checkUser(pieces[0])){
            ui->listWidget->addItem(pieces[0]);
        }
        if(pieces[0] == userID + " "){
            ui->ChatBox->append(msg);
            QTextCursor cursor = ui->ChatBox->textCursor();
            QTextBlockFormat textBlockFormat = cursor.blockFormat();
            textBlockFormat.setAlignment(Qt::AlignRight);
            cursor.mergeBlockFormat(textBlockFormat);
            ui->ChatBox->setTextCursor(cursor);
        }
        else{
            ui->ChatBox->append(msg);
            QTextCursor cursor = ui->ChatBox->textCursor();
            QTextBlockFormat textBlockFormat = cursor.blockFormat();
            textBlockFormat.setAlignment(Qt::AlignLeft);
            cursor.mergeBlockFormat(textBlockFormat);
            ui->ChatBox->setTextCursor(cursor);
        }
    }
}


bool LoginWindow::setData(QString data){
    if(socket->state() == QAbstractSocket::ConnectedState)
        {
            socket->write(data.toLocal8Bit()); //write the data itself
            return socket->waitForBytesWritten();
        }
        else
            return false;
}

void LoginWindow::loginwait(QString data){
    socket->write(data.toLocal8Bit());
}

bool LoginWindow::checkUser(QString string){
    qDebug() << string;
    for(int i = 0; i < ui->listWidget->count(); ++i)
    {
        QString str = ui->listWidget->item(i)->text();
        qDebug() << str;
        if(str.trimmed() == (string.trimmed())){
            return true;
        }
    }

    return false;
}
