#ifndef FETCHQUEST_H
#define FETCHQUEST_H

#include "Quest.h"

class FetchQuest
: public Quest
{
    public:
        FetchQuest(){}
        ~FetchQuest(){}

    protected:
        virtual void performObjectives() override
        {
            std::cout << "Collecting items for the fetch quest." << std::endl;
            // Assume some items are collected here
            this->isCompleted = true;
        }

        virtual void rewardPlayer() override
        {
            std::cout << "Rewarding player with 20 gold and 50 experience." << std::endl;
        }
};

#endif
