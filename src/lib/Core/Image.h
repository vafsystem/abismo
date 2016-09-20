#ifndef ABISMO_CORE_IMAGE_H
#define ABISMO_CORE_IMAGE_H

#include "ObjectBase.h"

namespace abm {
namespace core {



class Image : public  ObjectBase
{
    public:

        Image( );
        Image( unsigned int w , unsigned int h );

        bool  set(std::string property , ... );
        void *get(std::string property );

    private:

        int *_value;

};


}
}


#endif // ABISMO_CORE_IMAGE_H
