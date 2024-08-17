#ifndef CONCRETESTATEA_H
#define CONCRETESTATEA_H

#include "State.h"
#include "ConcreteStateB.h" 

#include <iostream>

class ConcreteStateB;

class ConcreteStateA
: public State
{
    public:
        ConcreteStateA()
        : concreteStateB(new ConcreteStateB())
        {
            this->concreteStateB->setContext(this->context);
        }
        ~ConcreteStateA()
        {
            delete this->concreteStateB;
        }

        virtual bool execute(int a, int b) override
        {
            if((a + b) > 42)
            {
                std::cout << "Concrete State A confirms, a + b is greater than 42 -> delegating to next State B!" << std::endl;
                this->context->setState(this->concreteStateB);
                return true;
            }
            else
            {
                std::cout << "Concrete State A: a + b is lower than 42..." << std::endl;
                return false;
            }
        }

    private:
        ConcreteStateB* concreteStateB = nullptr;
};

#endif
