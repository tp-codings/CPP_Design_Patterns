#include "InputManager.h"
#include "Character.h"

int main()
{
    Character* character = new Character();
    InputManager* inputManager = new InputManager(character);

    //Move Character
    inputManager->keyboardListener(0);

    //Attack
    inputManager->keyboardListener(1);

    //Attack with higher damage
    character->setAttackDamage(150);
    inputManager->keyboardListener(1);

    return 0;
}