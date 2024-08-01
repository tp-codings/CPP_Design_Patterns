#ifndef HUD_H
#define HUD_H

#include "Component.h"
#include <string>
#include <iostream>

class HUD
: public Component
{
    public:
        HUD(){}
        ~HUD(){}

        void updatePlayerInfo(int newHealth)
        {
            this->playerHealth = newHealth;
        }

        void updateAttackInfo(int newAttackDamage)
        {
            this->attackDamage = newAttackDamage;
        }

        void updateBossInfo(int newHealth)
        {
            this->bossHealth = newHealth;
        }

        void printDisplayText()
        {
            std::cout << "========================== H U D ==========================" << std::endl
            << "PLAYER HEALTH: - " << this->playerHealth << " - " << std::endl
            << "BOSS HELTH: - " << this->bossHealth << " - " << std::endl
            << "ATTACK DAMAGE: - " << this->attackDamage << " - " << std::endl
            << "===========================================================" << std::endl << std::endl;
        }

    private:
        std::string displayText;

        int playerHealth = 0;
        int bossHealth = 0;
        int attackDamage = 0; 
};

#endif
