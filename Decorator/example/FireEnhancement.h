#ifndef FIREENHANCEMENT_H
#define FIREENHANCEMENT_H

#include "WeaponDecorator.h"
#include <iostream>

class FireEnhancement
: public WeaponDecorator
{
    public:
        FireEnhancement(Weapon* weapon) 
        : WeaponDecorator(weapon) {}
        ~FireEnhancement(){}

        void use() override 
        {
            this->decoratedWeapon->use();
            std::cout << "Added fire damage!" << std::endl;
        }
};

#endif
