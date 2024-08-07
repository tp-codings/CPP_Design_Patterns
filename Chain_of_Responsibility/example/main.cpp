#include "StatusEffectHandler.h"
#include "ManaCheckHandler.h"
#include "CooldownCheckHandler.h"
#include "RangeCheckHandler.h"
#include "CastingSpellHandler.h"


BaseActionHandler* createUtilitySpellHandler()
{
    StatusEffectHandler* statusEffectHandler = new StatusEffectHandler();
    CastingSpellHandler* castingSpellHandler = new CastingSpellHandler();

    statusEffectHandler->setNext(castingSpellHandler);

    return statusEffectHandler;
}

BaseActionHandler* createAttackSpellHandler(int requiredMana, int maxRange)
{
    StatusEffectHandler* statusEffectHandler = new StatusEffectHandler();
    ManaCheckHandler* manaCheckHandler = new ManaCheckHandler();
    CooldownCheckHandler* cooldownCheckHandler = new CooldownCheckHandler();
    RangeCheckHandler* rangeCheckHandler = new RangeCheckHandler();
    CastingSpellHandler* castingSpellHandler = new CastingSpellHandler();

    manaCheckHandler->setRequiredMana(requiredMana);
    rangeCheckHandler->setMaxRange(maxRange);

    statusEffectHandler->setNext(manaCheckHandler);
    manaCheckHandler->setNext(cooldownCheckHandler);
    cooldownCheckHandler->setNext(rangeCheckHandler);
    rangeCheckHandler->setNext(castingSpellHandler);

    return statusEffectHandler;
}

int main()
{

    BaseActionHandler* fireSpellHandler = createAttackSpellHandler(50, 10);
    BaseActionHandler* lightSpellHandler = createUtilitySpellHandler();

    CommonDataTypes::SpellMetaInfo fireSpellRequestA 
    = {"Fire Spell", CommonDataTypes::SpellMetaInfo::NONE, 60, 0, 9, true};
    CommonDataTypes::SpellMetaInfo fireSpellRequestB 
    = {"Fire Spell", CommonDataTypes::SpellMetaInfo::IN_VILLAGE, 60, 0, 9, true};
    CommonDataTypes::SpellMetaInfo fireSpellRequestC 
    = {"Fire Spell", CommonDataTypes::SpellMetaInfo::NONE, 40, 0, 9, true};
    CommonDataTypes::SpellMetaInfo fireSpellRequestD 
    = {"Fire Spell", CommonDataTypes::SpellMetaInfo::NONE, 60, 0, 12, true};
    CommonDataTypes::SpellMetaInfo fireSpellRequestE 
    = {"Fire Spell", CommonDataTypes::SpellMetaInfo::NONE, 60, 5, 12, true};

    CommonDataTypes::SpellMetaInfo lightSpellRequestA 
    = {"Light Spell", CommonDataTypes::SpellMetaInfo::NONE, 60, 0, 9, false};
    CommonDataTypes::SpellMetaInfo lightSpellRequestB 
    = {"Light Spell", CommonDataTypes::SpellMetaInfo::IN_VILLAGE, 60, 0, 9, false}; 
    CommonDataTypes::SpellMetaInfo lightSpellRequestC 
    = {"Light Spell", CommonDataTypes::SpellMetaInfo::STUNNED, 40, 0, 9, false};
    CommonDataTypes::SpellMetaInfo lightSpellRequestD 
    = {"Light Spell", CommonDataTypes::SpellMetaInfo::NONE, 60, 0, 12, false};

    std::cout << "======== F I R E   S P E L L   V A R I A T I O N ========" << std::endl
    << fireSpellHandler->handle(fireSpellRequestA) << std::endl
    << fireSpellHandler->handle(fireSpellRequestB) << std::endl
    << fireSpellHandler->handle(fireSpellRequestC) << std::endl
    << fireSpellHandler->handle(fireSpellRequestD) << std::endl
    << fireSpellHandler->handle(fireSpellRequestE) << std::endl << std::endl;

    std::cout << "======== L I G H T   S P E L L   V A R I A T I O N ========" << std::endl
    << lightSpellHandler->handle(lightSpellRequestA) << std::endl
    << lightSpellHandler->handle(lightSpellRequestB) << std::endl
    << lightSpellHandler->handle(lightSpellRequestC) << std::endl
    << lightSpellHandler->handle(lightSpellRequestD) << std::endl << std::endl;

    return 0;
}