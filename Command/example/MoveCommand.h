#ifndef MOVECOMMAND_H
#define MOVECOMMAND_H

#include "ActionCommand.h"
#include <iostream>

class MoveCommand
: public ActionCommand
{
    public:
        MoveCommand(Character* character)
        : ActionCommand(character){}
        ~MoveCommand(){}

        virtual void execute() override
        {
            this->character->move();
        }
};

#endif
