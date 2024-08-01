#include "Player.h"
#include "Boss.h"
#include "HUD.h"
#include "CombatMediator.h"

int main()
{
    Player* player = new Player(150, 33);
    Boss* boss = new Boss(350, 59);
    HUD* hud = new HUD();

    CombatMediator* combatMediator = new CombatMediator(player, boss, hud);

    std::cout << ">>>>>>>>>>>>>>>>>>>>>>>> F I G H T <<<<<<<<<<<<<<<<<<<<<<<<" << std::endl;

    player->attack();
    player->attack();
    boss->attack();
    player->attack();

    std::cout << "..." << std::endl;

    return 0;
}