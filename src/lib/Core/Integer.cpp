#include "Integer.h"

using namespace abm::core;

Integer::Integer()
{
    init( OBJECT_TYPE_INTEGER );

}

Integer::Integer( int value )
{
  Integer();
  setValue(value);
}



bool  Integer::set(std::string property , ... )
{
  printf( "Intefer::set().... \n"  );
}

void *Integer::get(std::string property )
{

}



void *Integer::getValue()
{
 //int *value = (int*)getBuffer();
// return getBuffer();
}



bool Integer::setValue( int nArgs , ...)
{
 //   int *i = (int *)getBuffer();

  //  *i = value;

}
