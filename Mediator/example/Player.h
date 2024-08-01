#ifndef PLAYER_H
#define PLAYER_H

#include "Component.h"

class Player
: public Component
{
    public:
        Player(int health, int attackDamage, Mediator* mediator = nullptr)
        : health(health), attackDamage(attackDamage), Component(mediator){}
        ~Player(){}

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
