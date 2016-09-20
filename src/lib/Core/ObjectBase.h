#ifndef ABISMO_OBJECTBASE_H
#define ABISMO_OBJECTBASE_H
#include "Version.h"

#include <iostream>
#include <map>
#include <functional>

namespace abm {
namespace core {


enum{
    OBJECT_TPYE_UNDEFINED,
    OBJECT_TYPE_BOOLEAN,
    OBJECT_TYPE_CHAR,
    OBJECT_TYPE_INTEGER,
    OBJECT_TYPE_FLOAT,
    OBJECT_TYPE_VECTOR,
    OBJECT_TYPE_STRING,
    OBJECT_TYPE_IMAGE,
    OBJECT_TYPE_VERTEX,
    OBJECT_TYPE_FACES,
};



struct ObjectHeader{
    //version
    unsigned int majorVersion;
    unsigned int minorVersion;
    unsigned int patchVersion;

    //type of the object,  image , integer , matrix , etc
    unsigned int type;

    //buffer size
    unsigned int bufferSize;
};





class ObjectBase
{
    public:
        ObjectBase(  );
       ~ObjectBase();

        void *getBuffer();
        void *getHeaderAndHeader();


        bool setSize( unsigned int size );

        unsigned int getSize();

        virtual bool  set(std::string property , ... );
        virtual void *get(std::string property );


      //  std::function<bool(int)> handleSets = NULL;

    protected:


        //object header allocate at start buffer !
        ObjectHeader _header;

        //position of data in the buffer
        unsigned _offsetData;

        void init( unsigned int type );

        //memory buffer, it is the real memory what contain the data, header and data
        void *_buffer;


    private :



};



}
}

#endif // OBJECTBASE_H
