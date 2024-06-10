#ifndef CONCRETEPRODUCTB2_H
#define CONCRETEPRODUCTB2_H

#include "AbstractProductB.h"
#include <iostream>

class ConcreteProductB2
: public AbstractProductB
{
    public: 
        ConcreteProductB2(){}
        ~ConcreteProductB2(){}

        void dump()
        {
            std::cout << "> ConcreteProductB2 <" << std::endl;
        }
};

#endif