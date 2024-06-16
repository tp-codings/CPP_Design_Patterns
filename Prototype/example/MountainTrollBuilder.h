#ifndef MOUNTAINTROLLBUILDER_H
#define MOUNTAINTROLLBUILDER_H

#define MTSTRENGTHMULTIPLICATOR 1
#define MTHEALTHMULTIPLICATOR 5

#include "TrollBuilder.h"
#include "MountainTroll.h"
#include <string>

class MountainTrollBuilder
: public TrollBuilder
{
    public:
        MountainTrollBuilder()
        {
            this->reset();
        }
        ~MountainTrollBuilder(){}

        virtual void reset() override
        {
            this->result = new MountainTroll();
        }
        virtual void setSuperPower() override
        {
            this->result->setSuperPower();
        }
        virtual void setWeapon(std::string weaponType) override
        {
            this->result->setWeapon(weaponType + " | Class: Mountain");
        }
        virtual void setArmour(std::string armourType) override
        {
            this->result->setArmour(armourType + " | Class: Mountain");
        }
        virtual void setName(std::string name) override
        {
            this->result->setName(name);
        }
        virtual void setCanThrowRocks() override
        {
            this->result->setCanThrowRocks(true);
        }
        virtual void setIsPeaceful(bool isPeaceful) override
        {
            this->result->setIsPeaceful(isPeaceful);
        }
        virtual void setStrength(int strength) override
        {
            this->result->setStrength(strength * MTSTRENGTHMULTIPLICATOR);
        }
        virtual void setHeight(int height) override
        {
            this->result->setHeight(height);
        }
        virtual void setHealth(int health) override
        {
            this->result->setHealth(health * MTHEALTHMULTIPLICATOR);
        }
    
        MountainTroll* getResult()
        {
            return this->result;
        }

    private:
        MountainTroll* result;
};

#endif