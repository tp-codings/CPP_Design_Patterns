#include "DragonFactory.h"
#include "TrollFactory.h"
#include <vector>

int main() {
    TrollFactory trollFactory;
    DragonFactory dragonFactory; 

    std::vector<Enemy*> enemies; 

    // create enemies
    enemies.push_back(trollFactory.createEnemy());
    enemies.push_back(dragonFactory.createEnemy());
    enemies.push_back(trollFactory.createEnemy());

    // splash damage
    for (auto it = enemies.begin(); it != enemies.end(); ) 
    {
        bool isDead = (*it)->hit(160);
        if (isDead) {
            it = enemies.erase(it);
        } else {
            ++it;
        }
    }

    return 0;
}