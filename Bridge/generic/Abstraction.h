#ifndef ABSTRACTION_H
#define ABSTRACTION_H

#include "Implementation.h"

class Abstraction 
{
    public:
        Abstraction(Implementation* implementation) 
        : implementation(implementation){}
        virtual ~Abstraction(){}

        virtual void use() = 0;

    protected:
        Implementation* implementation;
};

#endif 
