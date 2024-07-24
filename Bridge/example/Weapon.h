#ifndef WEAPON_H
#define WEAPON_H

#include "WeaponBehavior.h"

class Weapon 
{
    public:
        Weapon(WeaponBehavior* behavior) 
        : behavior(behavior){}
        virtual ~Weapon(){}

        virtual void use() = 0;

    protected:
        WeaponBehavior* behavior;
};

#endif 
