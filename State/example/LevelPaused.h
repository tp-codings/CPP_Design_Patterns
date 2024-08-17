#ifndef LEVELPAUSED_H
#define LEVELPAUSED_H

#include "LevelState.h"
#include <iostream>

class LevelPaused
    : public LevelState
{
public:
    LevelPaused();
    virtual ~LevelPaused();

    virtual bool processLevel(LEVELTRANSITION levelTransition) override;
    virtual void display() override;
};

#endif 

