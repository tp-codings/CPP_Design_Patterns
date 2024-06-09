#ifndef CONCRETEPRODUCTA_H
#define CONCRETEPRODUCTA_H

#include "AbstractProduct.h"
#include <iostream>

class ConcreteProductA
: public AbstractProduct
{
    public:
        ConcreteProductA(){}
        ~ConcreteProductA(){}

        void dump() override
        {
            std::cout << "> ConcreteProductA <" << std::endl;
        }
};

#endif