#ifndef CONCRETESTRATEGYA_H
#define CONCRETESTRATEGYA_H

#include "Strategy.h"
#include <iostream>

class ConcreteStrategyA
: public Strategy
{
    public:
        ConcreteStrategyA(){}
        ~ConcreteStrategyA(){}

        virtual void execute() override
        {
            std::cout << "Context performs Concrete Strategy A!" << std::endl;
        }
};

#endif
