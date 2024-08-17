#ifndef LEVELNOTSTARTED_H
#define LEVELNOTSTARTED_H

#include "LevelState.h"
#include <iostream>

class LevelNotStarted
    : public LevelState
{
public:
    LevelNotStarted();
    ~LevelNotStarted();

    virtual bool processLevel(LEVELTRANSITION levelTransition) override;
    virtual void display() override;
};

#endif
