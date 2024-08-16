#ifndef ACTIONMANAGER_H
#define ACTIONMANAGER_H

#include "ActionCommand.h"

class ActionManager
{
    public:
        ActionManager(){}
        ~ActionManager(){}

        void executeCommand(ActionCommand* actionCommand)
        {
            actionCommand->execute();
            delete actionCommand;
        }
};

#endif
