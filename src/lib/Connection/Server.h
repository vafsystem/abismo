#ifndef ABISMO_CONNECTION_SERVER_H
#define ABISMO_CONNECTION_SERVER_H

#include <iostream>
#include <qlocalserver.h>

namespace abm {
namespace connection {



class Server : public QObject
{
    Q_OBJECT

    public:
        Server(QObject *parent = 0  );
        ~Server();
    signals:

    public slots:

        void newConnection();

    private:

        QLocalServer *_server = nullptr ;
        std::string _id;

};

}
}
#endif // ABISMO_CONNECTION_SERVER_H
