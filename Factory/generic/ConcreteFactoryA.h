#ifndef CONCRETEFACTORYA_H
#define CONCRETEFACTORYA_H

#include "AbstractFactory.h"
#include "ConcreteProductA.h"

class ConcreteFactoryA
: public AbstractFactory
{
    public:
        ConcreteFactoryA(){}
        ~ConcreteFactoryA(){}
        
        AbstractProduct* createProduct() override
        {
            return new ConcreteProductA;
        } 
};

#endif