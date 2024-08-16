#ifndef COMMAND_H
#define COMMAND_H

#include "Receiver.h"

class Command
{
    public:
        Command(Receiver* receiver)
        : receiver(receiver){}
        virtual ~Command(){}

        virtual void execute() = 0;

        void undo()
        {
            this->receiver->setState(this->backupState);
        }
        
    protected:
        Receiver* receiver = nullptr;
        int backupState = 0;

        void saveBackup()
        {
            this->backupState = this->receiver->getState();
        }
};

#endif
