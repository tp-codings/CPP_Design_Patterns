#include "LevelPaused.h"
#include "LevelNotStarted.h" 
#include "LevelInProgress.h" 
#include "Level.h"

LevelPaused::LevelPaused()
{
}

LevelPaused::~LevelPaused()
{
}

bool LevelPaused::processLevel(LEVELTRANSITION levelTransition)
{
    if (levelTransition == LEVELTRANSITION::QUIT)
    {
        std::cout << "STATE: LevelPaused -> Level quit." << std::endl;
        this->level->setLevelState(new LevelNotStarted());
        return true;
    }
    else if (levelTransition == LEVELTRANSITION::RESUME)
    {
        std::cout << "STATE: LevelPaused -> Level resumed." << std::endl;
        this->level->setLevelState(new LevelInProgress());
        return true;
    }
    else
    {
        std::cout << "STATE: LevelPaused -> Level transition not supported." << std::endl;
        return false;
    }
}

void LevelPaused::display()
{
    std::cout << "CURRENT STATE: LevelPaused." << std::endl;
}
