#ifndef ABISMO_CONNECTION_SERVER_H
#define ABISMO_CONNECTION_SERVER_H

#include <iostream>
#include <qlocalserver.h>

namespace abm {
namespace connection {



class ConnectionServer : public QObject
{
    Q_OBJECT

    public:
        ConnectionServer(QObject *parent = 0  );
        ~ConnectionServer();
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
