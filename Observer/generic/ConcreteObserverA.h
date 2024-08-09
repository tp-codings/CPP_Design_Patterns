#ifndef CONCRETEOBSERVERA_H
#define CONCRETEOBSERVERA_H

#include "Observer.h"
#include <iostream>

class ConcreteObserverA
: public Observer
{
    public:
        ConcreteObserverA(){}
        ~ConcreteObserverA(){}

        virtual void update(int state) override
        {
            std::cout << "Concrete Observer A triggered with new state: " << state << std::endl;
        }
};

#endif
