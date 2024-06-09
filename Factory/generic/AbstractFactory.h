#ifndef ABSTRACTFACTORY_H
#define ABSTRACTFACTORY_H

#include "AbstractProduct.h"

class AbstractFactory
{
    public:
        AbstractFactory(){}
        virtual ~AbstractFactory(){}

        virtual AbstractProduct* createProduct() = 0;
};

#endif