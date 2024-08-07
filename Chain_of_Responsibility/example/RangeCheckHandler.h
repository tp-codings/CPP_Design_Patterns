#ifndef RANGECHECKHANDLER_H
#define RANGECHECKHANDLER_H

#include "BaseActionHandler.h"

class RangeCheckHandler
: public BaseActionHandler
{
    public:
        RangeCheckHandler(int maxRange = 0)
        : maxRange(maxRange){}
        ~RangeCheckHandler(){}

        void setMaxRange(int maxRange)
        {
            this->maxRange = maxRange;
        }

        virtual std::string handle(CommonDataTypes::SpellMetaInfo spellMetaInfo) override
        {
            if(spellMetaInfo.rangeToOpponent > this->maxRange)
            {
                return "Casting Spell: " + spellMetaInfo.spellName + " failed: OPPONENT NOT IN RANGE: " 
                + std::to_string(spellMetaInfo.rangeToOpponent) + "/" + std::to_string(this->maxRange) 
                + ".\n";
            }
            else
            {
                return BaseActionHandler::handle(spellMetaInfo);
            }
        }

    private:
        int maxRange = 0;
};

#endif
