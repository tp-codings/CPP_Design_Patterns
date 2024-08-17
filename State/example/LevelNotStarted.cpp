#include "LevelNotStarted.h"
#include "LevelInProgress.h"
#include "Level.h"

LevelNotStarted::LevelNotStarted() {}

LevelNotStarted::~LevelNotStarted() {}

bool LevelNotStarted::processLevel(LEVELTRANSITION levelTransition)
{
    if (levelTransition == LEVELTRANSITION::START)
    {
        std::cout << "STATE: LevelNotStarted -> Level started." << std::endl;
        this->level->setLevelState(new LevelInProgress());
        return true;
    }
    else
    {
        std::cout << "STATE: LevelNotStarted -> Leveltransition not supported." << std::endl;
        return false;
    }
}

void LevelNotStarted::display()
{
    std::cout << "CURRENT STATE: LevelNotStarted." << std::endl;
}