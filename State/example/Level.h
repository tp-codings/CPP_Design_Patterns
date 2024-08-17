#ifndef LEVEL_H
#define LEVEL_H

#include "LevelState.h"

class Level
{
public:
    Level(LevelState* levelState)
        : levelState(levelState)
    {
        this->levelState->setLevel(this);
    }
    ~Level()
    {
        delete levelState;
    }

    void setLevelState(LevelState* levelState)
    {
        if (this->levelState)
        {
            delete this->levelState;
        }
        this->levelState = levelState;
        this->levelState->setLevel(this);
    }

    bool processLevel(LEVELTRANSITION levelTransition)
    {
        return this->levelState->processLevel(levelTransition);
    }

    void display()
    {
        this->levelState->display();
    }

private:
    LevelState* levelState = nullptr;
};

#endif
