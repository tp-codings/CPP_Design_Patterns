#ifndef ICEENHANCEMENT_H
#define ICEENHANCEMENT_H

#include "WeaponDecorator.h"
#include <iostream>

class IceEnhancement
: public WeaponDecorator 
{
    public:
        ~IceEnhancement(){}
        IceEnhancement(Weapon* weapon) 
        : WeaponDecorator(weapon) {}

        void use() override 
        {
            decoratedWeapon->use();
            std::cout << "Added ice damage!" << std::endl;
        }
};

#endif
