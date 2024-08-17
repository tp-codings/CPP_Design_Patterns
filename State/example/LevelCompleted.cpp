#include "LevelCompleted.h"
#include "LevelNotStarted.h"
#include "Level.h"

LevelCompleted::LevelCompleted()
{
}

LevelCompleted::~LevelCompleted()
{
}

bool LevelCompleted::processLevel(LEVELTRANSITION levelTransition)
{
    if (levelTransition == LEVELTRANSITION::QUIT)
    {
        std::cout << "STATE: LevelCompleted -> Level not Started." << std::endl;
        this->level->setLevelState(new LevelNotStarted());
        return true;
    }
    else
    {
        std::cout << "STATE: LevelCompleted -> Level state transition not supported." << std::endl;
        return false;
    }
}

void LevelCompleted::display()
{
    std::cout << "CURRENT STATE: LevelCompleted." << std::endl;
}
