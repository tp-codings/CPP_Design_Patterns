#ifndef ESCAPESTRATEGY_H
#define ESCAPESTRATEGY_H

#include "BehaviorStrategy.h"
#include <iostream>

class EscapeStrategy
: public BehaviorStrategy
{
    public:
        EscapeStrategy(){}
        ~EscapeStrategy(){}

        virtual void execute() override
        {
            std::cout << "The opponent flees!" << std::endl;
        }
};

#endif
