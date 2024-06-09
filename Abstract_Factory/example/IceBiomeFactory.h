#ifndef ICEBIOMEFACTORY_H
#define ICEBIOMEFACTORY_H

#include "BiomeFactory.h"
#include "IceDragon.h"
#include "IceTroll.h"

class IceBiomeFactory
: public BiomeFactory
{
    public:
        IceBiomeFactory(){}
        ~IceBiomeFactory(){}

        Dragon* createDragon() override
        {
            return new IceDragon();
        }

        Troll* createTroll() override
        {
            return new IceTroll();
        }
};

#endif