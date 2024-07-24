#ifndef SPECIALBEHAVIOR_H
#define SPECIALBEHAVIOR_H

#include "WeaponBehavior.h"
#include <iostream>

class SpecialBehavior 
: public WeaponBehavior 
{
    public:
        SpecialBehavior(){}
        ~SpecialBehavior(){}
        
        void attack() override 
        {
            std::cout << "Performing a special attack." << std::endl;
        }
};

#endif 