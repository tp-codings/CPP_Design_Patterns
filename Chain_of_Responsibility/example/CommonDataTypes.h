#ifndef COMMONDATATYPES_H
#define COMMONDATATYPES_H

#include <string>

namespace CommonDataTypes
{
    struct SpellMetaInfo
    {
        std::string spellName;
        enum StatusEffect{SILENCED, STUNNED, INDOORS, IN_VILLAGE, NONE} statusEffect;
        int currentMana;
        int currentCooldown;
        int rangeToOpponent;
        bool isAttackSpell;
    };
}

#endif
