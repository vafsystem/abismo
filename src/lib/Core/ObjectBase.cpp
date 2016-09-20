#include "ObjectBase.h"
#include <stdio.h>

using namespace abm::core;


ObjectBase::ObjectBase(  )
{
  printf("ObjectBase Contructor  \n");
  init( OBJECT_TPYE_UNDEFINED );
}

void ObjectBase::init( unsigned int type )
{
 printf("ObjectBase init \n");
 _header.majorVersion = ABISMO_MAJOR_VERSION;
 _header.minorVersion = ABISMO_MINOR_VERSION;
 _header.patchVersion = ABISMO_PATCH_VERSION;
 _header.type = type ;
 _header.bufferSize = 0;

  setSize(0);
  printf("init \n");
}


ObjectBase::~ObjectBase()
{
  if( _buffer != NULL )
  {
      free(_buffer);
  }
}




void *ObjectBase::getBuffer()
{
  return (char*)_buffer+(_offsetData);
}



void *ObjectBase::getHeaderAndHeader()
{
  return _buffer;
}



bool ObjectBase::setSize( unsigned int size )
{
    unsigned int totalSize = sizeof(ObjectHeader) + size ;

    printf("total size %d \n" , totalSize );

    _buffer = calloc( 1 , totalSize );
    if( _buffer == NULL )
    {
        return false;
    }

    _offsetData = totalSize;
    _header.bufferSize = size;

    memcpy( _buffer , &_header , sizeof(ObjectHeader) );

    return true;
}


unsigned int ObjectBase::getSize()
{

 return 0;
}


bool ObjectBase::set(std::string property , ... )
{
  printf("ObjectBase::sets %s  \n", property.c_str() );
  int *i = (int*)getBuffer();


  va_list list;
  va_start(list,property);


  *i = va_arg(list,int);
  return true;
}


void *ObjectBase::get(std::string property )
{
  printf("ObjectBase get().... \n");
  return getBuffer();
}



