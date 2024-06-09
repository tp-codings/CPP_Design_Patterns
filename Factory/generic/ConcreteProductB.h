#ifndef CONCRETEPRODUCTB_H
#define CONCRETEPRODUCTB_H

#include "AbstractProduct.h"
#include <iostream>

class ConcreteProductB
: public AbstractProduct
{
    public:
        ConcreteProductB(){}
        ~ConcreteProductB(){}

        void dump() override
        {
            std::cout << "> ConcreteProductB <" << std::endl;
        }
};

#endif