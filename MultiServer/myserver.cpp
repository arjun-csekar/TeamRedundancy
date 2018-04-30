#include "myserver.h"
#include <QtSql>
#include <QsqlDatabase>

QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");

QStringList list;
QList<QTcpSocket*> sock;

MyServer::MyServer(QObject *parent) : QTcpServer(parent)
{
    //this->socketDescriptor = ID;
    db.setHostName("localhost");
    db.setUserName("root");
    db.setPassword("password");
    db.setDatabaseName("duckdb");
}

void MyServer::StartServer(){
    if(!this->listen(QHostAddress::Any, 1234)){
        qDebug() << "Could not start server";
    }
    else{
        qDebug() << "Server listening";
    }
}
void MyServer::incomingConnection(int socketDescriptor){

    qDebug() << socketDescriptor << " Starting thread";
    QTcpSocket *socket = new QTcpSocket(this);
    socket->setSocketDescriptor(socketDescriptor);
    /*if(!socket->setSocketDescriptor(this->socketDescriptor)){
        emit error(socket->error());
        return;
    }*/

    connect(socket,SIGNAL(readyRead()), this, SLOT(readyRead()));
    connect(socket,SIGNAL(disconnected()), this, SLOT(disconnected()));

    qDebug() << socketDescriptor << " Client Conected";

    //exec();
}

void MyServer::readyRead(){
    QTcpSocket *socket = (QTcpSocket*)sender();
    QString Data = socket->readAll();
    qDebug() << "This is server";
    qDebug() << socketDescriptor << " Data in: " << Data;


    QStringList pieces = QString(Data).split(":");

    if(pieces[pieces.length() -1] == "NewUser"){
        if (db.open()) {
            QSqlQuery query;
            query.prepare("INSERT INTO userprofile (userName, password, socketNum) " "VALUES (:un, :pw, :so)");
            query.bindValue(":un", pieces[0]);
            query.bindValue(":pw", pieces[1]);
            query.bindValue(":so", socketDescriptor);
            query.exec();
        } else {
            qDebug() << "Failed to connect to database";
            qDebug() << db.lastError();
        }
    }
    else if(pieces[pieces.length()-1] == "Login"){
        if (db.open()) {
            QSqlQuery query;
            query.prepare("SELECT * FROM userprofile WHERE userName=:un");
            query.bindValue(":un", pieces[0]);
            query.exec();

            qDebug() << query.first();

            if (pieces[1] != query.value("password")) {
                socket->write("false");
            } else {
                socket->write("true");
                list.append(pieces[0]);
                qDebug() << "This is socket " << socket;
                sock.append(socket);
            }
        }
    }
    else{
        foreach(QTcpSocket *socket, sock){
            //qDebug() << num;
            socket->write(QString(Data).toUtf8());
            //this->socket = num;
            //qDebug()<< "Sending to " << num;
            //socket->write(Data);
        }
    }
}

void MyServer::disconnected(){

    qDebug() << socketDescriptor << " Disconnected";
   // QTcpSocket *client = (QTcpSocket*)sender();
    //socket->deleteLater();
    //exit(0);
}
