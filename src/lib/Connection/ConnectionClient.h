#ifndef ABISMO_CONNECTION_CLIENT_H
#define ABISMO_CONNECTION_CLIENT_H

#include <QObject>
#include <qlocalsocket.h>


namespace abm {
namespace connection {

class ConnectionClient : public QObject
{
    Q_OBJECT

    public:

       ConnectionClient(QObject *parent = 0);

    signals:

    public slots:
    void readyRead();
    private:

       QLocalSocket *_socket;

};


}
}


#endif // ABISMO_CONNECTION_CLIENT_H
