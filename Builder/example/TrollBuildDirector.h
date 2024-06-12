#ifndef TROLLBUILDDIRECTOR_H
#define TROLLBUILDDIRECTOR_H

#include "TrollBuilder.h"

class TrollBuildDirector
{
    public:
        TrollBuildDirector(){}
        ~TrollBuildDirector(){}

        void buildYoungTroll(TrollBuilder* trollBuilder)
        {
            trollBuilder->setWeapon("Stick");
            trollBuilder->setIsPeaceful(true);
            trollBuilder->setStrength(50);
            trollBuilder->setHeight(170);
            trollBuilder->setHealth(100);
        }

        void buildAdultTroll(TrollBuilder* trollBuilder)
        {
            trollBuilder->setWeapon("Sword");
            trollBuilder->setArmour("Spiked Armor");
            trollBuilder->setSuperPower();
            trollBuilder->setCanThrowRocks();
            trollBuilder->setIsPeaceful(false);
            trollBuilder->setStrength(300);
            trollBuilder->setHeight(290);
            trollBuilder->setHealth(700);
        }
};  

#endif