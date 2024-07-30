#ifndef DEFEATBOSSQUEST_H
#define DEFEATBOSSQUEST_H

#include "Quest.h"

class DefeatBossQuest
: public Quest
{
    public:
        DefeatBossQuest(){}
        ~DefeatBossQuest(){}

    protected:
        virtual void performObjectives() override
        {
            std::cout << "Fighting the boss." << std::endl;
            // Assume some items are collected here
            this->isCompleted = true;
        }

        virtual void rewardPlayer() override
        {
            std::cout << "Rewarding player with special loot and 200 experience." << std::endl;
        }
};

#endif
