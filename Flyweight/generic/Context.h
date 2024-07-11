#ifndef CONTEXT_H
#define CONTEXT_H

#include "StateDataTypes.h"
#include "Flyweigtht.h"
#include "FlyweightFactory.h"
#include <iostream>

class Context
{
    public:
        Context(StateDatatypes::UniqueState uniqueState, StateDatatypes::SharedState sharedState)
        : uniqueState(uniqueState)
        {
            this->flyweightFactory = FlyweightFactory::getFlyweightFactory();
            this->flyweight = this->flyweightFactory->getFlyweight(sharedState);
        }
        ~Context(){}

        void dump()
        {
            std::cout << "-------------- C O N T E X T --------------" << std::endl
            << "Shared Data:" << std::endl
            << "--> TYPE: " << this->flyweight->getType() << std::endl 
            << "--> SHARED VALUE: " << std::to_string(this->flyweight->getSharedVal()) << std::endl
            << "Unique Data:" << std::endl
            << "--> UNIQUE VALUE 1: " << std::to_string(this->uniqueState.valUnique1) << std::endl
            << "--> UNIQUE VALUE 2: " << std::to_string(this->uniqueState.valUnique2) << std::endl << std::endl;
        }

    private:
        StateDatatypes::UniqueState uniqueState;
        Flyweight* flyweight;
        FlyweightFactory* flyweightFactory;
};

#endif