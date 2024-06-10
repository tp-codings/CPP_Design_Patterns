#ifndef CONCRETEPRODUCTA_H
#define CONCRETEPRODUCTA_H

#include "AbstractProductA.h"
#include <iostream>

class ConcreteProductA
: public AbstractProductA
{
    public: 
        ConcreteProductA(){}
        ~ConcreteProductA(){}

        void dump()
        {
            std::cout << "> ConcreteProductA <" << std::endl;
        }
};

#endif