#include "ConcreteAbstraction.h"
#include "ConcreteImplementationA.h"
#include "ConcreteImplementationB.h"

int main() 
{
    Implementation* concreteImplementationA = new ConcreteImplementationA();
    Implementation* concreteImplementationB = new ConcreteImplementationB();

    Abstraction* concreteAbstraction = new ConcreteAbstraction(concreteImplementationA);
    concreteAbstraction->use();

    delete concreteAbstraction;

    // Changing behavior at runtime
    concreteAbstraction = new ConcreteAbstraction(concreteImplementationB);
    concreteAbstraction->use();

    return 0;
}
