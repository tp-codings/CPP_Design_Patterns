#ifndef CONCRETECOMMANDA_H
#define CONCRETECOMMANDA_H

#include "Command.h"
#include <iostream>

class ConcreteCommandA
: public Command
{
    public:
        ConcreteCommandA(Receiver* receiver)
        : Command(receiver){}
        ~ConcreteCommandA(){}

        virtual void execute() override
        {
            this->saveBackup();
            std::cout << "Concrete Command A increments State of Receiver:" << std::endl;
            this->receiver->incrementState();
            std::cout << "-------------------------" << std::endl;
        }
};

#endif
