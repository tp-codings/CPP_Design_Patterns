#ifndef SENDER_H
#define SENDER_H

#include "CommandHistory.h"
#include <iostream>

class Sender
{
    public:
        Sender()
        : commandHistory(new CommandHistory()){}
        ~Sender()
        {
            delete this->commandHistory;
        }

        void executeCommand(Command* command)
        {
            command->execute();
            this->commandHistory->push(command);
        }

        void undo()
        {
            Command* command = this->commandHistory->pop();
            std::cout << "Undo last Command: " << std::endl;
            if(command != nullptr)
            {
                command->undo();
                std::cout << "Successfully undone." << std::endl;
            }
            else
            {
                std::cout << "Nothing to undo." << std::endl;
            }
            std::cout << "-------------------------" << std::endl;

        }

    private:
        CommandHistory* commandHistory = nullptr;
};

#endif
