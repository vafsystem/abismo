#ifndef ABISMO_CONNECTION_MESSAGE_H
#define ABISMO_CONNECTION_MESSAGE_H

namespace abm {
namespace connection {

enum MessageType{
SESSION,
COMMAND,
};


struct ConnectionMessage{
unsigned char  type;
unsigned long  id;
unsigned char  status;
unsigned long  size;
void *data;
};


}
}
#endif // ABISMO_CONNECTION_MESSAGE_H
