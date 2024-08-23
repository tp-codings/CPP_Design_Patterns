#ifndef SETTINGSMANAGER_H
#define SETTINGSMANAGER_H

#include "Settings.h"
#include <stack>

class SettingsManager
{
    public:
        SettingsManager(Settings* settings)
        : settings(settings){}
        ~SettingsManager(){}

        void setBrightness(int b) 
        {
            this->undoStack.push(this->settings->saveConfigs());
            this->settings->setBrightness(b);
            this->clearRedoStack();
        }

        void setVolume(int v) 
        {
            this->undoStack.push(this->settings->saveConfigs());
            this->settings->setVolume(v);
            this->clearRedoStack();
        }

        void setDifficulty(Config::Options::Difficulty d) 
        {
            this->undoStack.push(this->settings->saveConfigs());
            this->settings->setDifficulty(d);
            this->clearRedoStack();
        }

        void setResolution(int x, int y) 
        {
            this->undoStack.push(this->settings->saveConfigs());
            this->settings->setResolution(x, y);
            this->clearRedoStack();
        }

        void setFullscreen(bool f) 
        {
            this->undoStack.push(this->settings->saveConfigs());
            this->settings->setFullscreen(f);
            this->clearRedoStack();
        }

        void undo()
        {
            this->restoreFromStack(this->undoStack, this->redoStack);
        }

        void redo()
        {
            this->restoreFromStack(this->redoStack, this->undoStack);
        }

    private:
        Settings* settings = nullptr;
        std::stack<Settings::Memento*> undoStack;
        std::stack<Settings::Memento*> redoStack;

        void clearRedoStack()
        {
            while (!redoStack.empty()) 
            {
                redoStack.pop(); 
            }
        }

        void restoreFromStack(std::stack<Settings::Memento*>& restoreStack, 
                              std::stack<Settings::Memento*>& trackStack)
        {
            if(!restoreStack.empty())
            {
                Settings::Memento* memento = restoreStack.top();
                restoreStack.pop();
                trackStack.push(this->settings->saveConfigs());
                this->settings->restore(memento);
            }
            else
            {
                std::cout << "Nothing to redo or undo!" << std::endl;
            }
        }
};

#endif
