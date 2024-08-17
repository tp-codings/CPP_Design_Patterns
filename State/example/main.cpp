#include "CommonDefinitions.h"
#include "Level.h"
#include "LevelNotStarted.h"

int main()
{
    LevelNotStarted* initialLevelState = new LevelNotStarted();
    Level* level = new Level(initialLevelState);

    std::cout << "========== G A M E  ==========" << std::endl;
    level->display();
    level->processLevel(LEVELTRANSITION::PAUSE);

    std::cout << "---------- Player starts Level. ----------" << std::endl;
    level->processLevel(LEVELTRANSITION::START);
    level->display();

    std::cout << std::endl << "---------- Player pauses Level. ----------" << std::endl;
    level->processLevel(LEVELTRANSITION::PAUSE);
    level->display();

    std::cout << std::endl << "---------- Player resumes Level. ----------" << std::endl;
    level->processLevel(LEVELTRANSITION::RESUME);
    level->display();

    std::cout << std::endl << "---------- Player pauses Level. ----------" << std::endl;
    level->processLevel(LEVELTRANSITION::PAUSE);
    level->display();

    std::cout << std::endl << "---------- Player quits Level. ----------" << std::endl;
    level->processLevel(LEVELTRANSITION::QUIT);
    level->display();

    std::cout << std::endl << "---------- Player starts Level. ----------" << std::endl;
    level->processLevel(LEVELTRANSITION::START);
    level->display();

    std::cout << std::endl << "---------- Player completes Level. ----------" << std::endl;
    level->processLevel(LEVELTRANSITION::COMPLETE);
    level->display();

    std::cout << std::endl << "---------- Player quits Level. ----------" << std::endl;
    level->processLevel(LEVELTRANSITION::QUIT);
    level->display();


    return 0;
}