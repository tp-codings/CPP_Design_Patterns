#ifndef CONCRETEOBSERVERB_H
#define CONCRETEOBSERVERB_H

#include "Observer.h"
#include <iostream>

class ConcreteObserverB
: public Observer
{
    public:
        ConcreteObserverB(){}
        ~ConcreteObserverB(){}

        virtual void update(int state) override
        {
            std::cout << "Concrete Observer B triggered with new state: " << state << std::endl;
        }
};

#endif
