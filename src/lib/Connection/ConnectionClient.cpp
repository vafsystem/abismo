#include <iostream>
#include "ConnectionClient.h"

using namespace abm::connection;

ConnectionClient::ConnectionClient( QObject *parent) : QObject(parent)
{
   printf("Abismo::Client \n");
   _socket = new QLocalSocket(this);

   connect(_socket, SIGNAL(readyRead()), this, SLOT(readyRead()));

   _socket->abort();
   _socket->connectToServer("pepe3"  );


}


void ConnectionClient::readyRead()
{
    std::cout << "Client::readReady" << std::endl;
    std::cout << "Client::byte to read: " << _socket->bytesAvailable() << std::endl;
    std::cout << "Client::message :" << _socket->readAll().toStdString() << std::endl;
}


