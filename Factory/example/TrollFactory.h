#ifndef TROLLFACTORY_H
#define TROLLFACTORY_H

#include "EnemyFactory.h"
#include "Troll.h"

class TrollFactory 
: public EnemyFactory
{
    public:
        TrollFactory(){}
        ~TrollFactory(){}

        Enemy* createEnemy() override
        {
            return new Troll;
        }
};

#endif