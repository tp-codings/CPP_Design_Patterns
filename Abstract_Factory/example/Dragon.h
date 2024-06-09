#ifndef DRAGON_H
#define DRAGON_H

#include "Enemy.h"
#include <iostream>

class Dragon 
: public Enemy
{
    public:
        Dragon()
        {
            this->health = 1000;
        }
        ~Dragon(){}

        bool hit(int damage) override 
        {
            bool isDead;

            this->health -= damage;

            if(this->health <= 0)
            {
                this->health = 0;
                isDead = true;
                std::cout << "Dragon dead!" << std::endl;
            } else
            {
                std::cout << "Dragon hit! Health: " << this->health << std::endl;
            }
            return isDead;
        }
};

#endif