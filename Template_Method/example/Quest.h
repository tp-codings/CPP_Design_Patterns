#ifndef QUEST_H
#define QUEST_H

#include <iostream>

class Quest
{
    public:
        Quest(){}
        virtual ~Quest(){}

        virtual void performQuest() final
        {
            this->startQuest();
            this->performObjectives();
            if(this->verifyCompletion())
            {
                std::cout << "Quest Completed!" << std::endl;
                this->rewardPlayer();
            }
            this->endQuest();
        }

    protected:
        bool isCompleted = false;

        virtual void startQuest()
        {
            std::cout << "------------- S T A R T E D   Q U E S T -------------" << std::endl;
        }

        virtual void endQuest()
        {
            std::cout << "--------------- E N D E D   Q U E S T ---------------" << std::endl << std::endl;
        }

        virtual bool verifyCompletion()
        {
            std::cout << "Verifying completion..." << std::endl;
            return isCompleted;
        }

        virtual void performObjectives() = 0;
        virtual void rewardPlayer() = 0;
};

#endif
