#ifndef MOUNTAINTROLL_H
#define MOUNTAINTROLL_H

#include "Troll.h"
#include <iostream>

class MountainTroll
: public Troll
{
    public: 
        MountainTroll(){}
        ~MountainTroll(){}

        void uniqueAttack()
        {
            std::cout << "MountainTroll throws rocks!" << std::endl;
        }
};

#endif