#ifndef CARETAKER_H
#define CARETAKER_H

#include "Originator.h"
#include <iostream>

class Caretaker
{
    public:
        Caretaker(Originator* originator)
        : originator(originator){}
        ~Caretaker(){}

        void command(std::string newState) 
        {
            undoStack.push_back(this->originator->saveState());
            this->originator->setState(newState);
            std::cout << "Backup saved and command executed!" << std::endl;

            while (!redoStack.empty()) 
            {
                redoStack.pop_back(); 
            }
        }

        void undo()
        {
            if(!this->undoStack.empty())
            {
                Originator::Memento* memento = this->undoStack.back();
                this->redoStack.push_back(this->originator->saveState());
                this->undoStack.pop_back();
                this->originator->restoreState(memento);
                std::cout << "Last command undone!" << std::endl;
            }
            else
            {
                std::cout << "Nothing to undo!" << std::endl;
            }
        }

        void redo()
        {
            if(!this->redoStack.empty())
            {
                Originator::Memento* memento = this->redoStack.back();
                this->undoStack.push_back(this->originator->saveState());
                this->redoStack.pop_back();
                this->originator->restoreState(memento);
                std::cout << "Last command redone!" << std::endl;
            }
            else
            {
                std::cout << "Nothing to redo!" << std::endl;
            }
        }

    private:
        Originator* originator = nullptr;
        std::vector<Originator::Memento*> undoStack;
        std::vector<Originator::Memento*> redoStack;
};

#endif
