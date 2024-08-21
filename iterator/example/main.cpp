#include "Inventory.h"
#include "Weapon.h"
#include "Potion.h"
#include "Iterator.h"

int main() {
    Inventory inventory;

    Weapon* sword = new Weapon("Sword");
    Potion* healthPotion = new Potion("Health Potion");
    Weapon* axe = new Weapon("Axe");
    Potion* manaPotion = new Potion("Mana Potion");

    inventory.addItem(sword);
    inventory.addItem(healthPotion);
    inventory.addItem(axe);
    inventory.addItem(manaPotion);

    sword->equip();
    manaPotion->equip();

    Iterator* weaponIterator = inventory.createFilteredIterator([](Item* item) { return item->getType() == "Weapon"; });
    Iterator* potionIterator = inventory.createFilteredIterator([](Item* item) { return item->getType() == "Potion"; });
    Iterator* equippedIterator = inventory.createEquippedIterator();

    std::cout << "Weapons in inventory:" << std::endl;
    
    while (weaponIterator->hasNext()) 
    {
        Item* item = weaponIterator->next();
        item->showDetail();
    }
    delete weaponIterator;

    std::cout << "--------------------------" << std::endl << "Potions in inventory:" << std::endl;
    while (potionIterator->hasNext()) 
    {
        Item* item = potionIterator->next();
        item->showDetail();
    }
    delete potionIterator;

    std::cout << "--------------------------" << std::endl << "Equipped items in inventory:" << std::endl;
    while (equippedIterator->hasNext()) 
    {
        Item* item = equippedIterator->next();
        std::cout << "Equipped ";
        item->showDetail();
    }
    delete equippedIterator;

    delete sword;
    delete healthPotion;
    delete axe;
    delete manaPotion;

    return 0;
}