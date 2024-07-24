#include "Bow.h"
#include "FireEnhancement.h"
#include "IceEnhancement.h"

int main() 
{
    Weapon* bow = new Bow();

    bow = new FireEnhancement(bow);
    bow = new IceEnhancement(bow);

    bow->use();

    return 0;
}
