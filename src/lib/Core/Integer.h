#ifndef ABISMO_CORE_INTEGER_H
#define ABISMO_CORE_INTEGER_H
#include "ObjectBase.h"

namespace abm {
namespace core {


class Integer : public ObjectBase
{

    public:
        Integer();
        Integer( int value );

         bool  set(std::string property , ... );
         void *get(std::string property );

    protected:

    private:


         bool  setValue( int nArgs , ...);
         void *getValue();

};



}
}


#endif // ABISMO_CORE_INTEGER_H
