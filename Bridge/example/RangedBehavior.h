#ifndef RANGEDBEHAVIOR_H
#define RANGEDBEHAVIOR_H

#include "WeaponBehavior.h"
#include <iostream>

class RangedBehavior 
: public WeaponBehavior 
{
    public:
        RangedBehavior(){}
        ~RangedBehavior(){}

        void attack() override 
        {
            std::cout << "Performing a ranged attack." << std::endl;
        }
};

#endif