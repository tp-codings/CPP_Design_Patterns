#ifndef ATTACKCOMMAND_H
#define ATTACKCOMMAND_H

#include "ActionCommand.h"
#include <iostream>

class AttackCommand
: public ActionCommand
{
    public:
        AttackCommand(Character* character, int damage)
        : ActionCommand(character), damage(damage){}
        ~AttackCommand(){}

        virtual void execute() override
        {
            this->character->attack(damage);
        }
    
    private:
        int damage = 0;
};

#endif
