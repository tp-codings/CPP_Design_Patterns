#ifndef NPC_H
#define NPC_H

#include "Subscriber.h"
#include "DayNightContext.h"
#include <iostream>

class NPC
: public Subscriber
{
    public:
        NPC(){}
        ~NPC(){}

        virtual void update(Context* context) override
        {
            if(DayNightContext* dNC = dynamic_cast<DayNightContext*>(context))
            {
                if(!dNC->getIsDay())
                {
                    dNC->getIsFullMoon() ? std::cout << "NPC sleeps with high alertness." << std::endl
                    : std::cout << "NPC sleeps normally." << std::endl;
                }
                else
                {
                    std::cout << "NPC wakes up." << std::endl;
                }
            }
            else
            {
                std::cout << "Received unknown Context\n";
            }
        }
};

#endif
