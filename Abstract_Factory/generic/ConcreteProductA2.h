#ifndef CONCRETEPRODUCTA2_H
#define CONCRETEPRODUCTA2_H

#include "AbstractProductA.h"
#include <iostream>

class ConcreteProductA2
: public AbstractProductA
{
    public: 
        ConcreteProductA2(){}
        ~ConcreteProductA2(){}

        void dump()
        {
            std::cout << "> ConcreteProductA2 <" << std::endl;
        }
};

#endif