#ifndef FLYWEIGHTFACTORY
#define FLYWEIGHTFACTORY

#include "Flyweigtht.h"
#include "StateDataTypes.h"
#include <map>
#include <iostream>

class FlyweightFactory
{
    public:
        ~FlyweightFactory(){}

        static FlyweightFactory* getFlyweightFactory()
        {
            if(flyweightFactory == nullptr)
            {
                flyweightFactory = new FlyweightFactory();
            }
            return flyweightFactory;
        }

        Flyweight* getFlyweight(StateDatatypes::SharedState sharedState)
        {
            std::string key = sharedState.type + std::to_string(sharedState.valShared);

            if(flyweights.find(key) == flyweights.end())
            {
                flyweights[key] = new Flyweight(sharedState);
                std::cout << "Added new Flyweight: " << std::endl
                << "--> TYPE: " << sharedState.type << std::endl
                << "--> SHARED VALUE: " << sharedState.valShared << std::endl << std::endl;
            }
            return flyweights[key];
        }

    private:

        FlyweightFactory(){}

        static FlyweightFactory* flyweightFactory;
        std::map<std::string, Flyweight*> flyweights;
};

FlyweightFactory* FlyweightFactory::flyweightFactory = nullptr;

#endif