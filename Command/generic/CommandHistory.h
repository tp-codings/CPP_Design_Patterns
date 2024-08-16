#ifndef COMMANDHISTORY_H
#define COMMANDHISTORY_H

#include "Command.h"
#include <vector>

class CommandHistory
{
    public:
        CommandHistory(){}
        ~CommandHistory(){}

        void push(Command* command)
        {
            this->history.push_back(command);
        }

        Command* pop()
        {
            if (!this->history.empty())
            {
                Command* command = this->history.back();
                this->history.pop_back();
                return command;
            }
            else
            {
                return nullptr;
            }
        }

    private:
        std::vector<Command*> history;
};

#endif
