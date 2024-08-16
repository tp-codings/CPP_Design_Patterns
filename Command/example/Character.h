#ifndef CHARACTER_H
#define CHARACTER_H

#include <iostream>

class Character
{
    public:
        Character(){}
        ~Character(){}

        void move()
        {
            std::cout << "Character is moving." << std::endl;
        }

        void attack(int damage)
        {
            std::cout << "Character is attacking with attack damage: " << damage << "." << std::endl;
        }

        int getAttackDamage()
        {
            return this->attackDamage;
        }

        void setAttackDamage(int attackDamage)
        {
            this->attackDamage = attackDamage;
        }

    private:
        int attackDamage = 50;
};

#endif
