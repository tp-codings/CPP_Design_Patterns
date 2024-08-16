#ifndef CONCRETECOMMANDB_H
#define CONCRETECOMMANDB_H

#include "Command.h"
#include <iostream>

class ConcreteCommandB
: public Command
{
    public:
        ConcreteCommandB(Receiver* receiver)
        : Command(receiver){}
        ~ConcreteCommandB(){}

        virtual void execute() override
        {
            this->saveBackup();
            std::cout << "Concrete Command B resets State of receiver:" << std::endl;
            this->receiver->resetState();
            std::cout << "-------------------------" << std::endl;
        }
};

#endif
