#ifndef TROLL_H
#define TROLL_H

#include "Enemy.h"
#include <iostream>

class Troll 
: public Enemy
{
    public:
        Troll()
        {
            this->health = 150;
        }
        ~Troll(){}

        bool hit(int damage) override
        {
            bool isDead = false;

            this->health -= damage;

            if(this->health <= 0)
            {
                this->health = 0;
                isDead = true;
                std::cout << "Troll dead!" << std::endl;
            } else
            {
                std::cout << "Troll hit! Health: " << this->health << std::endl;
            }
            return isDead;
        }
};

#endif