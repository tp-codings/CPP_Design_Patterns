#include "Facade.h"

int main()
{

    Facade* facade = new Facade();

    facade->subsystemOperationA();
    facade->subsystemOperationB();

    return 0;
}