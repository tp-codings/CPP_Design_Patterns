#ifndef WEAPONDECORATOR_H
#define WEAPONDECORATOR_H

#include "Weapon.h"

class WeaponDecorator
: public Weapon
{
    public:
        WeaponDecorator(Weapon* weapon) 
        : decoratedWeapon(weapon){}
        virtual ~WeaponDecorator() 
        { 
            delete decoratedWeapon; 
        }

    protected:
        Weapon* decoratedWeapon;

};

#endif
