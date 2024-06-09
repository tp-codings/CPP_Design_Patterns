#include "IceBiomeFactory.h"
#include "MountainBiomeFactory.h"
#include "BiomeFactory.h"
#include <vector>

int main()
{

    int biome = 0;

    BiomeFactory* biomeFactory;

    if(biome == 1)
    {
        biomeFactory = new IceBiomeFactory();
    }
    else
    {
        biomeFactory = new MountainBiomeFactory();
    }

    std::vector<Enemy*> enemies; 

    // create enemies
    enemies.push_back(biomeFactory->createTroll());
    enemies.push_back(biomeFactory->createDragon());

    for (auto* i : enemies)
    {
        i->uniqueAttack();
    }

    return 0;

}