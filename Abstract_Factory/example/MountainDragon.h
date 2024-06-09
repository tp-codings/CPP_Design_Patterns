#ifndef MOUNTAINDRAGON_H
#define MOUNTAINDRAGON_H

#include "Dragon.h"
#include <iostream>

class MountainDragon
: public Dragon
{
    public: 
        MountainDragon(){}
        ~MountainDragon(){}

        void uniqueAttack() override
        {
            std::cout << "MountainDragon spits acid!" << std::endl;
        }
};

#endif