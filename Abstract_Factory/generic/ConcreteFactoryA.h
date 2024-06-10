#ifndef CONCRETEFACTORYA_H
#define CONCRETEFACTORYA_H

#include "AbstractFactory.h"
#include "ConcreteProductA.h"
#include "ConcreteProductB.h"

class ConcreteFactoryA
: public AbstractFactory
{
    public:
        ConcreteFactoryA(){}
        ~ConcreteFactoryA(){}

        AbstractProductA* createProductA() override
        {
            return new ConcreteProductA();
        }

        AbstractProductB* createProductB() override
        {
            return new ConcreteProductB();
        }
};

#endif