#ifndef CONCRETECOMPONENT_H
#define CONCRETECOMPONENT_H

#include "Component.h"
#include <iostream>

class ConcreteComponent
: public Component
{
    public:
        ConcreteComponent(){}
        ~ConcreteComponent(){}

        virtual void use() override
        {
            std::cout << "Using a Concrete Component: " << std::endl;
        }
};

#endif
