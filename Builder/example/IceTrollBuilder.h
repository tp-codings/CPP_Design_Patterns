#ifndef ICETROLLBUILDER_H
#define ICETROLLBUILDER_H

#define ITSTRENGTHMULTIPLICATOR 2
#define ITHEALTHMULTIPLICATOR 3

#include "TrollBuilder.h"
#include "IceTroll.h"
#include <string>

class IceTrollBuilder
: public TrollBuilder
{
    public:
        IceTrollBuilder()
        {
            this->reset();
        }
        ~IceTrollBuilder(){}

        virtual void reset() override
        {
            this->result = new IceTroll();
        }
        virtual void setSuperPower() override
        {
            this->result->setSuperPower();
        }
        virtual void setWeapon(std::string weaponType) override
        {
            this->result->setWeapon(weaponType + " | Class: Ice");
        }
        virtual void setArmour(std::string armourType) override
        {
            this->result->setArmour(armourType + " | Class: Ice");
        }
        virtual void setName(std::string name) override
        {
            this->result->setName(name);
        }
        virtual void setCanThrowRocks() override
        {
            this->result->setCanThrowRocks(false);
        }
        virtual void setIsPeaceful(bool isPeaceful) override
        {
            this->result->setIsPeaceful(isPeaceful);
        }
        virtual void setStrength(int strength) override
        {
            this->result->setStrength(strength * ITSTRENGTHMULTIPLICATOR);
        }
        virtual void setHeight(int height) override
        {
            this->result->setHeight(height);
        }
        virtual void setHealth(int health) override
        {
            this->result->setHealth(health * ITHEALTHMULTIPLICATOR);
        }
    
        IceTroll* getResult()
        {
            return this->result;
        }

    private:
        IceTroll* result;
};

#endif