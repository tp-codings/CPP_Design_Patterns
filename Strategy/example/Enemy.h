#ifndef ENEMY_H
#define ENEMY_H

#include "BehaviorStrategy.h"
#include <iostream>

class Enemy
{
    public:
        Enemy(){}
        ~Enemy(){}

        void setBehaviorStrategy(BehaviorStrategy* behaviorStrategy)
        {
            this->behaviorStrategy = behaviorStrategy;
        }

        void executeBehavior() 
        {
            if(this->behaviorStrategy)
            {
                this->behaviorStrategy->execute();
            }
            else
            {
                std::cout << "No behavior defined!" << std::endl;
            }
        }

    private:
        BehaviorStrategy* behaviorStrategy = nullptr;
};

#endif
