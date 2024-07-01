#include "Inventory.h"
#include "GameObject.h"

#include <iostream>

int main()
{
    GameObject* sword = new GameObject(100, 7, "IronSword");
    GameObject* torch = new GameObject(5, 3, "Torch");
    GameObject* spell = new GameObject(30, 2, "Cloning Spell");
    GameObject* oldCoin = new GameObject(240, 1, "Antique Gold Coin");

    Inventory* inventory = new Inventory(0, 0, 0);
    Inventory* bag = new Inventory(80, 4, 1);

    bag->appendItem(oldCoin);
    bag->appendItem(spell);

    inventory->appendItem(sword);
    inventory->appendItem(torch);
    inventory->appendItem(bag);

    std::string inventoryInfo = "";
    inventory->getItemInfo(inventoryInfo);

    std::cout << inventoryInfo << std::endl;
}