#ifndef WEAPONBEHAVIOR_H
#define WEAPONBEHAVIOR_H

class WeaponBehavior 
{
    public:
        WeaponBehavior(){}
        virtual ~WeaponBehavior(){}

        virtual void attack() = 0;
};

#endif 
