#include "Enemy.h"  
#include "AttackStrategy.h"
#include "EscapeStrategy.h"
#include "PatrolStrategy.h"

int main()
{
    Enemy* enemy = new Enemy();

    AttackStrategy* attackStrategy = new AttackStrategy();
    EscapeStrategy* escapeStrategy = new EscapeStrategy();
    PatrolStrategy* patrolStrategy = new PatrolStrategy();

    enemy->executeBehavior();
    enemy->setBehaviorStrategy(patrolStrategy);
    enemy->executeBehavior();

    std::cout << "Enemy spots Player!" << std::endl;
    enemy->setBehaviorStrategy(attackStrategy);
    enemy->executeBehavior();

    std::cout << "Enemy gets hurt!" << std::endl;
    enemy->setBehaviorStrategy(escapeStrategy);
    enemy->executeBehavior();

    return 0;
}