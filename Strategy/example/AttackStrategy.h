#ifndef ATTACKSTRATEGY_H
#define ATTACKSTRATEGY_H

#include "BehaviorStrategy.h"
#include <iostream>

class AttackStrategy
: public BehaviorStrategy
{
    public:
        AttackStrategy(){}
        ~AttackStrategy(){}

        virtual void execute() override
        {
            std::cout << "The opponent attacks the player!" << std::endl;
        }
};

#endif
