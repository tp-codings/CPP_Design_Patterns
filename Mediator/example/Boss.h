#ifndef BOSS_H
#define BOSS_H

#include "Component.h"

class Boss
: public Component
{
    public:
        Boss(int health, int attackDamage, Mediator* mediator = nullptr)
        : health(health), attackDamage(attackDamage), Component(mediator){}
        ~Boss(){}

        void hit(int damage)
        {
            this->health -= damage;
        }

        int getHealth()
        {
            return this->health;
        }

        int getAttackDamage()
        {
            return this->attackDamage;
        }

        void attack()
        {
            this->mediator->notify(this);
        }

    private:
        int health; 
        int attackDamage;
};

#endif
