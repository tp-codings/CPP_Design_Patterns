#ifndef CONCRETEFACTORYB_H
#define CONCRETEFACTORYB_H

#include "AbstractFactory.h"
#include "ConcreteProductA2.h"
#include "ConcreteProductB2.h"

class ConcreteFactoryB
: public AbstractFactory
{
    public:
        ConcreteFactoryB(){}
        ~ConcreteFactoryB(){}

        AbstractProductA* createProductA() override
        {
            return new ConcreteProductA2();
        }

        AbstractProductB* createProductB() override
        {
            return new ConcreteProductB2();
        }
};

#endif