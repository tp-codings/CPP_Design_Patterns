#ifndef COOLDOWNCHECKHANDLER_H
#define COOLDOWNCHECKHANDLER_H

#include "BaseActionHandler.h"

class CooldownCheckHandler
: public BaseActionHandler
{
    public:
        CooldownCheckHandler(){}
        ~CooldownCheckHandler(){}

        virtual std::string handle(CommonDataTypes::SpellMetaInfo spellMetaInfo) override
        {
            if(spellMetaInfo.currentCooldown > 0)
            {
                return "Casting Spell: " + spellMetaInfo.spellName + " failed: REMAINING COOLDOWN: " 
                + std::to_string(spellMetaInfo.currentCooldown) + ".\n";
            }
            else
            {
                return BaseActionHandler::handle(spellMetaInfo);
            }
        }
};

#endif
