#ifndef TROLLBUILDER_H
#define TROLLBUILDER_H

#include <string>

class TrollBuilder
{
    public:
        TrollBuilder(){}
        virtual ~TrollBuilder(){}

        virtual void reset() = 0;

        virtual void setSuperPower() = 0;
        virtual void setWeapon(std::string weaponType) = 0;
        virtual void setArmour(std::string armourType) = 0;
        virtual void setName(std::string name) = 0;
        virtual void setCanThrowRocks() = 0;
        virtual void setIsPeaceful(bool isPeaceful) = 0;
        virtual void setStrength(int strength) = 0;
        virtual void setHeight(int height) = 0;
        virtual void setHealth(int health) = 0;
};

#endif