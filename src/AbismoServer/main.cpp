#include <QCoreApplication>

#include <abismo/connection/Server.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    abm::connection::Server server;



    return a.exec();
}

