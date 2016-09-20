#include "Server.h"


using namespace abm::connection;

Server::Server( QObject *parent , int id ) : QObject(parent)
{
   std::cout << "Abismo::Server():  " << id << std::endl;

    _server = new QLocalServer(parent);
    if (!_server->listen( "pepe") )
    {
      printf("No se puede habrir el server \n");
    }


    connect(_server,SIGNAL(newConnection()) , this , SLOT(newConnection()));
}



Server::~Server()
{
  if( _server != nullptr )
  {
      delete _server;
  }
}



void Server::newConnection()
{
    printf("Server::newConnection \n");

}


