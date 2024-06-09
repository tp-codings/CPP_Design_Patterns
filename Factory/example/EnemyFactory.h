#ifndef ENEMYFACTORY_H
#define ENEMYFACTORY_H

#include "Enemy.h"
#include <memory>

class EnemyFactory 
{
    public:
        EnemyFactory(){}
        virtual ~EnemyFactory(){}

        virtual Enemy* createEnemy() = 0; 
};

#endif 
