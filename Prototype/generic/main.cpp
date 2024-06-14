#include "AbstractPrototype.h"
#include "ConcretePrototype.h"
#include "SubConcretePrototype.h"

int main()
{
    ConcretePrototype* prototype = new ConcretePrototype(42);
    ConcretePrototype* prototypeCopy = prototype->clone();

    SubConcretePrototype* subPrototype = new SubConcretePrototype(815);
    SubConcretePrototype* subPrototypeCopy = subPrototype->clone();


    prototypeCopy->incrementMember();
    subPrototypeCopy->incrementMember();

    prototype->dump();
    prototypeCopy->dump();
    subPrototype->dump();
    subPrototypeCopy->dump();
}