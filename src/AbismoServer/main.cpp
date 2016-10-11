#include <iostream>
#include <QCoreApplication>

#include <abismo/connection/ConnectionServer.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    abm::connection::ConnectionServer server;


    return a.exec();
}

