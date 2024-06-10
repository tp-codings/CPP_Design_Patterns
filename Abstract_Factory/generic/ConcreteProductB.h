#ifndef CONCRETEPRODUCTB_H
#define CONCRETEPRODUCTB_H

#include "AbstractProductB.h"
#include <iostream>

class ConcreteProductB
: public AbstractProductB
{
    public: 
        ConcreteProductB(){}
        ~ConcreteProductB(){}

        void dump()
        {
            std::cout << "> ConcreteProductB <" << std::endl;
        }
};

#endif