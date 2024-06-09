#ifndef BIOMEFACTORY_H
#define BIOMEFACTORY_H

#include "Dragon.h"
#include "Troll.h"

class BiomeFactory
{
    public:
        BiomeFactory(){}
        virtual ~BiomeFactory(){}

        virtual Dragon* createDragon() = 0;
        virtual Troll* createTroll() = 0;
};

#endif