#ifndef CASTINGSPELLHANDLER_H
#define CASTINGSPELLHANDLER_H

#include <iostream>
#include "BaseActionHandler.h"

class CastingSpellHandler
: public BaseActionHandler
{
    public:
        CastingSpellHandler(){}
        ~CastingSpellHandler(){}

        virtual std::string handle(CommonDataTypes::SpellMetaInfo spellMetaInfo) override
        {
            std::cout << "-------- C A S T I N G   S P E L L --------" << std::endl
            << "NAME: " << spellMetaInfo.spellName << std::endl
            << "STATUS EFFECT: " << std::to_string(spellMetaInfo.statusEffect) << std::endl
            << "MANA: " << std::to_string(spellMetaInfo.currentMana) << std::endl
            << "COOLDOWN: " << std::to_string(spellMetaInfo.currentCooldown) << std::endl
            << "RANGE TO OPPONENT: " << std::to_string(spellMetaInfo.rangeToOpponent) << std::endl;

            return "--> Casting Spell: " + spellMetaInfo.spellName + " successfull.\n";
        }
};

#endif
