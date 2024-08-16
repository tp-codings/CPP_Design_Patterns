#ifndef INPUTMANAGER_H
#define INPUTMANAGER_H

#include "ActionManager.h"
#include "AttackCommand.h"
#include "MoveCommand.h"

class InputManager
{
    public:
        InputManager(Character* character)
        : actionManager(new ActionManager()), character(character){}
        ~InputManager()
        {
            delete this->actionManager;
        }

        void keyboardListener(int event)
        {
            switch(event)
            {
                case 0: 
                    this->actionManager->executeCommand(new MoveCommand(this->character));
                    break;
                case 1:
                    this->actionManager->executeCommand(new AttackCommand(this->character, this->character->getAttackDamage()));
                    break;
            }
        }
 
    private:
        ActionManager* actionManager = nullptr;
        Character* character = nullptr;
};

#endif
