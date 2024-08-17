#include "LevelInProgress.h"
#include "LevelPaused.h" 
#include "LevelCompleted.h" 
#include "Level.h"

LevelInProgress::LevelInProgress()
{
}

LevelInProgress::~LevelInProgress()
{
}

bool LevelInProgress::processLevel(LEVELTRANSITION levelTransition)
{
    if (levelTransition == LEVELTRANSITION::PAUSE)
    {
        std::cout << "STATE: LevelInProgress -> Level paused." << std::endl;
        this->level->setLevelState(new LevelPaused());
        return true;
    }
    else if (levelTransition == LEVELTRANSITION::COMPLETE)
    {
        std::cout << "STATE: LevelInProgress -> Level completed." << std::endl;
        this->level->setLevelState(new LevelCompleted());
        return true;
    }
    else
    {
        std::cout << "STATE: LevelInProgress -> Level transition not supported." << std::endl;
        return false;
    }
}

void LevelInProgress::display()
{
    std::cout << "CURRENT STATE: LevelInProgress." << std::endl;
}
