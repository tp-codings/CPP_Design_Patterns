#ifndef CONCRETEFACTORYB_H
#define CONCRETEFACTORYB_H

#include "AbstractFactory.h"
#include "ConcreteProductB.h"

class ConcreteFactoryB
: public AbstractFactory
{
    public:
        ConcreteFactoryB(){}
        ~ConcreteFactoryB(){}
        
        AbstractProduct* createProduct() override
        {
            return new ConcreteProductB;
        } 
};

#endif