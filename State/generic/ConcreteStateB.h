#ifndef CONCRETESTATEB_H
#define CONCRETESTATEB_H

#include "State.h"
#include <iostream>

class ConcreteStateB
: public State
{
    public:
        ConcreteStateB(){}
        ~ConcreteStateB(){}

        virtual bool execute(int a, int b) override
        {
            std::cout << "Concrete State B presents: A -> " << a << "| B -> " << b << std::endl;
            return true;
        }
};

#endif
