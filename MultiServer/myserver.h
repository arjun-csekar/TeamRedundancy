#ifndef MYSERVER_H
#define MYSERVER_H

#include <QObject>
#include <QTcpServer>
#include <QDebug>
#include <QTcpSocket>

class MyServer : public QTcpServer
{
    Q_OBJECT
public:
    explicit MyServer(QObject *parent = nullptr);
    void StartServer();

signals:
     void error(QTcpSocket::SocketError socketerror);

private slots:
    void readyRead();
    void disconnected();

protected:
    void incomingConnection(int socketDescriptor);

private:
    QTcpSocket *socket;
    int socketDescriptor;

};

#endif // MYSERVER_H
