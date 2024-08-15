#ifndef CONCRETESTRATEGYB_H
#define CONCRETESTRATEGYB_H

#include "Strategy.h"
#include <iostream>

class ConcreteStrategyB
: public Strategy
{
    public:
        ConcreteStrategyB(){}
        ~ConcreteStrategyB(){}

        virtual void execute() override
        {
            std::cout << "Context performs Concrete Strategy B!" << std::endl;
        }
};

#endif
