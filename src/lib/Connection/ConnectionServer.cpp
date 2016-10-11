#include "ConnectionServer.h"
#include <qlocalsocket.h>

using namespace abm::connection;

ConnectionServer::ConnectionServer( QObject *parent ) : QObject(parent)
{
    std::cout << "Abismo Server " << std::endl;
    QLocalServer::removeServer("pepe3");
    _server = new QLocalServer(parent);
    if (!_server->listen( "pepe3") )
    {
      std::cout << "No se puede habrir el server 2:" << _server->errorString().toStdString() << std::endl;
    }
    else
    {
        connect(_server,SIGNAL(newConnection()) , this , SLOT(newConnection()));
    }
}



ConnectionServer::~ConnectionServer()
{
  if( _server != nullptr )
  {
      delete _server;
  }
}



void ConnectionServer::newConnection()
{
    std::string msg("hola desde el server");
    printf("Server::newConnection \n");

    QLocalSocket *clientConnection = _server->nextPendingConnection();
    connect(clientConnection, SIGNAL(disconnected()),
            clientConnection, SLOT(deleteLater()));

    clientConnection->write( msg.c_str() , msg.size()  );
    clientConnection->flush();
    clientConnection->disconnectFromServer();
}



