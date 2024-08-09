#ifndef ENEMY_H
#define ENEMY_H

#include "Subscriber.h"
#include "DayNightContext.h"
#include <iostream>

class Enemy
: public Subscriber
{
    public:
        Enemy(){}
        ~Enemy(){}

        virtual void update(Context* context) override
        {
            if(DayNightContext* dNC = dynamic_cast<DayNightContext*>(context))
            {
                if(!dNC->getIsDay())
                {
                    dNC->getIsFullMoon() ? std::cout << "Enemy is is highly aggressive." << std::endl
                    : std::cout << "Enemy is aggressive." << std::endl;
                }
                else
                {
                    std::cout << "Enemy is not aggressive." << std::endl;
                }
            }
            else
            {
                std::cout << "Received unknown Context\n";
            }
        }
};

#endif
