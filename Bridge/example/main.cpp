#include "Bow.h"
#include "SpecialBehavior.h"
#include "RangedBehavior.h"

int main() 
{
    WeaponBehavior* specialBehavior = new SpecialBehavior();
    WeaponBehavior* rangedBehavior = new RangedBehavior();

    Weapon* bow = new Bow(specialBehavior);
    bow->use();

    delete bow;

    // Changing behavior at runtime
    bow = new Bow(rangedBehavior);
    bow->use();

    return 0;
}
