#ifndef CONCRETEABSTRACTION_H
#define CONCRETEABSTRACTION_H

#include "Abstraction.h"
#include <iostream>

class ConcreteAbstraction 
: public Abstraction 
{
    public:
        ConcreteAbstraction(Implementation* implementation) 
        : Abstraction(implementation){}
        ~ConcreteAbstraction(){}

        void use() override 
        {
            std::cout << "Using a ConcreteAbstraction: ";
            this->implementation->operation();
        }
};

#endif 
