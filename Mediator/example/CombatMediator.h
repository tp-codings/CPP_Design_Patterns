#ifndef COMBATMEDIATOR_H
#define COMBATMEDIATOR_H

#include "Mediator.h"
#include "Player.h"
#include "Boss.h"
#include "HUD.h"
#include <iostream>

class CombatMediator
: public Mediator
{
    public:
        CombatMediator(Player* player, Boss* boss, HUD* hud)
        : player(player), boss(boss), hud(hud)
        {
            this->player->setMediator(this);
            this->boss->setMediator(this);
            this->hud->setMediator(this);
        }
        ~CombatMediator(){}

        virtual void notify(Component* component)
        {
            if(component == player)
            {
                this->boss->hit(player->getAttackDamage());
                this->hud->updateBossInfo(this->boss->getHealth());
                this->hud->updatePlayerInfo(this->player->getHealth());
                this->hud->updateAttackInfo(this->player->getAttackDamage());
                std::cout << "Player hits Boss!" << std::endl;
                this->hud->printDisplayText();
            }
            else if(component == boss)
            {
                this->player->hit(boss->getAttackDamage());
                this->hud->updatePlayerInfo(this->player->getHealth());
                this->hud->updateAttackInfo(this->boss->getAttackDamage());
                this->hud->updateBossInfo(this->boss->getHealth());
                std::cout << "Boss hits Player!" << std::endl;
                this->hud->printDisplayText();
            }
            else
            {
                std::cout << "ERROR: Component not compatible." << std::endl;
            }
        }

    private:
        Player* player;
        Boss* boss;
        HUD* hud; 
};

#endif
