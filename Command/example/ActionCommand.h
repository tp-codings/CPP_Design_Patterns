#ifndef ACTIONCOMMAND_H
#define ACTIONCOMMAND_H

#include "Character.h"

class ActionCommand
{
    public:
        ActionCommand(Character* character)
        : character(character){}
        virtual ~ActionCommand(){}

        virtual void execute() = 0;

    protected:
        Character* character = nullptr;
};

#endif
