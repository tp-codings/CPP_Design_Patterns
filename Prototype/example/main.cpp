#include "Troll.h"
#include "IceTrollBuilder.h"
#include "TrollBuildDirector.h"
#include "IceTroll.h"
#include <vector>

int main()
{
    IceTrollBuilder* iceTrollBuilder = new IceTrollBuilder();
    TrollBuildDirector* trollBuildDirector = new TrollBuildDirector();

    IceTroll* adultIceTroll;
    IceTroll* adultIceTrollCopy;

    // Ice Troll
    iceTrollBuilder->setName("Adult Ice Troll");
    trollBuildDirector->buildAdultTroll(iceTrollBuilder);
    adultIceTroll = iceTrollBuilder->getResult();
    iceTrollBuilder->reset();

    //clone troll
    adultIceTrollCopy = adultIceTroll->clone();

    adultIceTrollCopy->addCustomProperty("This is a copy!");

    adultIceTroll->dump();
    adultIceTrollCopy->dump();
}