#include "Image.h"
#include <stdio.h>


using namespace abm::core;


Image::Image(  )
{
  init( OBJECT_TYPE_IMAGE );

}


bool Image::set(std::string property , ... )
{

}


void *Image::get(std::string property )
{
  int value;
  return &value;
}
