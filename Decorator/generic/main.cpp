#include "ConcreteComponent.h"
#include "ConcreteDecoratorA.h"
#include "ConcreteDecoratorB.h"

int main()
{
    Component* concreteComponent = new ConcreteComponent();

    concreteComponent = new ConcreteDecoratorA(concreteComponent);
    concreteComponent = new ConcreteDecoratorB(concreteComponent);

    concreteComponent->use();

    return 0;
}