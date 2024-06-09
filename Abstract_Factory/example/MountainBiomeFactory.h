#ifndef MOUNTAINBIOMEFACTORY_H
#define MOUNTAINBIOMEFACTORY_H

#include "BiomeFactory.h"
#include "MountainDragon.h"
#include "MountainTroll.h"

class MountainBiomeFactory
: public BiomeFactory
{
    public:
        MountainBiomeFactory(){}
        ~MountainBiomeFactory(){}

        Dragon* createDragon() override
        {
            return new MountainDragon();
        }

        Troll* createTroll() override
        {
            return new MountainTroll();
        }
};

#endif