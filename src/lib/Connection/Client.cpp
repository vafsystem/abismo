#include "Client.h"

using namespace abm::connection;

Client::Client( QObject *parent) : QObject(parent)
{
   printf("Abismo::Client \n");
   _socket = new QLocalSocket(this);
   _socket->abort();
   _socket->connectToServer("abm3");

   connect(_socket, SIGNAL(readyRead()), this, SLOT(readyRead()));

}


void Client::readyRead()
{
    printf("Client::readReady\n");
}


