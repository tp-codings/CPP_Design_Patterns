#ifndef STATUSEFFECTHANDLER_H
#define STATUSEFFECTHANDLER_H

#include "BaseActionHandler.h"

class StatusEffectHandler
: public BaseActionHandler
{
    public:
        StatusEffectHandler(){}
        ~StatusEffectHandler(){}

        virtual std::string handle(CommonDataTypes::SpellMetaInfo spellMetaInfo) override
        {
            switch (spellMetaInfo.statusEffect)
            {
                case CommonDataTypes::SpellMetaInfo::SILENCED:
                    return "Casting Spell: " + spellMetaInfo.spellName + " failed: YOU ARE SILENCED.\n";

                case CommonDataTypes::SpellMetaInfo::STUNNED:
                    return "Casting Spell: " + spellMetaInfo.spellName + " failed: YOU ARE STUNNED.\n";

                case CommonDataTypes::SpellMetaInfo::INDOORS:
                    if(spellMetaInfo.isAttackSpell)
                    {
                        return "Casting Spell: " + spellMetaInfo.spellName + " failed: CANNOT CAST ATTACK SPELL INDOORS.\n";
                    }
                    else
                    {
                        return BaseActionHandler::handle(spellMetaInfo);
                    }

                case CommonDataTypes::SpellMetaInfo::IN_VILLAGE:
                    if(spellMetaInfo.isAttackSpell)
                    {
                        return "Casting Spell: " + spellMetaInfo.spellName + " failed: CANNOT CAST ATTACK SPELL IN VILLAGES.\n";
                    }
                    else
                    {
                        return BaseActionHandler::handle(spellMetaInfo);
                    }
                case CommonDataTypes::SpellMetaInfo::NONE:
                    return BaseActionHandler::handle(spellMetaInfo);
            }
        }       
};

#endif
