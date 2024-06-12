#include "Troll.h"
#include "IceTrollBuilder.h"
#include "MountainTrollBuilder.h"
#include "TrollBuildDirector.h"
#include <vector>

int main()
{
    IceTrollBuilder* iceTrollBuilder = new IceTrollBuilder();
    MountainTrollBuilder* mountainTrollBuilder = new MountainTrollBuilder();
    TrollBuildDirector* trollBuildDirector = new TrollBuildDirector();
    Troll* youngIceTroll;
    Troll* adultIceTroll;
    Troll* youngMountainTroll;
    Troll* adultMountainTroll;
    std::vector<Troll*> trolls;

    // Ice Troll
    iceTrollBuilder->setName("Young Ice Troll");
    trollBuildDirector->buildYoungTroll(iceTrollBuilder);
    youngIceTroll = iceTrollBuilder->getResult();
    trolls.push_back(youngIceTroll);

    iceTrollBuilder->reset();

    iceTrollBuilder->setName("Adult Ice Troll");
    trollBuildDirector->buildAdultTroll(iceTrollBuilder);
    adultIceTroll = iceTrollBuilder->getResult();
    trolls.push_back(adultIceTroll);

    // Mountain Troll
    mountainTrollBuilder->setName("Young Mountain Troll");
    trollBuildDirector->buildYoungTroll(mountainTrollBuilder);
    youngMountainTroll = mountainTrollBuilder->getResult();
    trolls.push_back(youngMountainTroll);

    mountainTrollBuilder->reset();

    mountainTrollBuilder->setName("Adult Mountain Troll");
    trollBuildDirector->buildAdultTroll(mountainTrollBuilder);
    adultMountainTroll = mountainTrollBuilder->getResult();
    trolls.push_back(adultMountainTroll);

    // dump
    youngIceTroll->dump();
    adultIceTroll->dump();
    youngMountainTroll->dump();
    adultMountainTroll->dump();

    // attack
    for(auto* i : trolls)
    {
        i->uniqueAttack();
    }
}