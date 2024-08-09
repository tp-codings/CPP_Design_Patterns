#include "DayNightCycle.h"
#include "DayNightContext.h"
#include "StreetLights.h"
#include "NPC.h"
#include "Enemy.h"

int main()
{
    DayNightCycle* dayNightCycle = new DayNightCycle();
    DayNightContext* dayNightContext = new DayNightContext();
    StreetLights* streetLights = new StreetLights();
    NPC* npc = new NPC();
    Enemy* enemy = new Enemy();

    dayNightCycle->add(streetLights);
    dayNightCycle->add(enemy);
    dayNightCycle->add(npc);

    std::cout << "========== N I G H T ==========" << std::endl;
    dayNightContext->setTime(23);
    dayNightCycle->updateContext(dayNightContext);

    std::cout << std::endl << "============ D A Y ============" << std::endl;
    dayNightContext->setTime(12);
    dayNightCycle->updateContext(dayNightContext);

    std::cout << std::endl << "========== N I G H T + ========" << std::endl;
    dayNightContext->setTime(23);
    dayNightContext->setIsFullMoon(true);
    dayNightCycle->updateContext(dayNightContext);

    return 0;
}