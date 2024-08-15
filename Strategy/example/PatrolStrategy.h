#ifndef PATROLSTRATEGY_H
#define PATROLSTRATEGY_H

#include "BehaviorStrategy.h"
#include <iostream>

class PatrolStrategy
: public BehaviorStrategy
{
    public:
        PatrolStrategy(){}
        ~PatrolStrategy(){}

        virtual void execute() override
        {
            std::cout << "The opponent patrols his route." << std::endl;
        }
};

#endif
