#ifndef WEAPON_H
#define WEAPON_H

class Weapon 
{
    public:
        Weapon(){}
        virtual ~Weapon(){}

        virtual void use() = 0;
};

#endif 
