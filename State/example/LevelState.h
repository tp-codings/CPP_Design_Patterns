#ifndef LEVELSTATE_H
#define LEVELSTATE_H

#include "CommonDefinitions.h"

class Level;

class LevelState
{
public:
    LevelState() {}
    virtual ~LevelState() {}

    virtual bool processLevel(LEVELTRANSITION levelTransition) = 0;
    virtual void display() = 0;

    void setLevel(Level* level)
    {
        this->level = level;
    }

protected:
    Level* level = nullptr;
};

#endif
