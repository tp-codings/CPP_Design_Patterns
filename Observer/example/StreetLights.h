#ifndef STREETLIGHTS_H
#define STREETLIGHTS_H

#include "Subscriber.h"
#include "DayNightContext.h"
#include <iostream>

class StreetLights
: public Subscriber
{
    public:
        StreetLights(){}
        ~StreetLights(){}

        virtual void update(Context* context) override
        {
            if(DayNightContext* dNC = dynamic_cast<DayNightContext*>(context))
            {
                if(!dNC->getIsDay())
                {
                    dNC->getIsFullMoon() ? std::cout << "Street Lights turn on at 75%." << std::endl
                    : std::cout << "Street Lights turn on at 100%." << std::endl;
                }
                else
                {
                    std::cout << "Street Lights turn off." << std::endl;
                }
            }
            else
            {
                std::cout << "Received unknown Context\n";
            }
        }
};

#endif
