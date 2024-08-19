#include "Trap.h"
#include "Treasure.h"
#include "PlayerVisitor.h"
#include "VillainVisitor.h"

int main()
{
    Trap* trap = new Trap();
    Treasure* treasure = new Treasure();
    PlayerVisitor* playerVisitor = new PlayerVisitor();
    VillainVisitor* villainVisitor = new VillainVisitor();

    treasure->accept(playerVisitor);
    trap->accept(playerVisitor);

    treasure->accept(villainVisitor);
    trap->accept(villainVisitor);

    return 0;
}