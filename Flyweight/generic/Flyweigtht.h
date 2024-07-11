#ifndef FLYWEIGHT_H
#define FLYWEIGHT_H

#include "StateDataTypes.h"
#include <string>

class Flyweight
{
    public:
        Flyweight(StateDatatypes::SharedState sharedState)
        : sharedState(sharedState){}
        ~Flyweight(){}

        std::string getType()
        {
            return this->sharedState.type;
        }

        int getSharedVal()
        {
            return this->sharedState.valShared;
        }

    private:
        StateDatatypes::SharedState sharedState;
};

#endif