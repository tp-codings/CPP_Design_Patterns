#ifndef LEVELCOMPLETED_H
#define LEVELCOMPLETED_H

#include "LevelState.h"
#include <iostream>

class LevelCompleted
: public LevelState
{
public:
    LevelCompleted();
    ~LevelCompleted();

    virtual bool processLevel(LEVELTRANSITION levelTransition) override;
    virtual void display() override;
};

#endif
