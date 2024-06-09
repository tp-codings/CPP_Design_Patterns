#ifndef DRAGONFACTORY_H
#define DRAGONFACTORY_H

#include "EnemyFactory.h"
#include "Dragon.h"

class DragonFactory 
: public EnemyFactory
{
    public:
        DragonFactory(){}
        ~DragonFactory(){}

        Enemy* createEnemy() override
        {
            return new Dragon();
        }
};

#endif

