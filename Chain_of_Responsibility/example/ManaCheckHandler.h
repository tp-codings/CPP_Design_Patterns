#ifndef MANACHECKHANDLER_H
#define MANACHECKHANDLER_H

#include "BaseActionHandler.h"

class ManaCheckHandler
: public BaseActionHandler
{
    public:
        ManaCheckHandler(int requiredMana = 0)
        : requiredMana(requiredMana){}
        ~ManaCheckHandler(){}

        void setRequiredMana(int requiredMana)
        {
            this->requiredMana = requiredMana;
        }

        virtual std::string handle(CommonDataTypes::SpellMetaInfo spellMetaInfo) override
        {
            if(spellMetaInfo.currentMana < this->requiredMana)
            {
                return "Casting Spell: " + spellMetaInfo.spellName + " failed: NOT ENOUGH MANA: " + std::to_string(spellMetaInfo.currentMana) + "/" + std::to_string(this->requiredMana) + ".\n";
            }
            else
            {
                return BaseActionHandler::handle(spellMetaInfo);
            }
        }

    private:
        int requiredMana = 0; 
};

#endif
