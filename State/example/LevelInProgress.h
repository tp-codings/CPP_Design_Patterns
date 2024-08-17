#ifndef LEVELINPROGRESS_H
#define LEVELINPROGRESS_H

#include "LevelState.h"
#include <iostream>

class LevelInProgress
    : public LevelState
{
public:
    LevelInProgress();
    virtual ~LevelInProgress();

    virtual bool processLevel(LEVELTRANSITION levelTransition) override;
    virtual void display() override;
};

#endif 
