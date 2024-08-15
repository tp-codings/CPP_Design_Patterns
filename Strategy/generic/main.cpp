#include "Context.h"
#include "ConcreteStrategyA.h"
#include "ConcreteStrategyB.h"

int main()
{
    Context* context = new Context();
    ConcreteStrategyA* concreteStrategyA = new ConcreteStrategyA();
    ConcreteStrategyB* concreteStrategyB = new ConcreteStrategyB();

    context->executeStrategy();
    context->setStrategy(concreteStrategyA);
    context->executeStrategy();
    
    context->setStrategy(concreteStrategyB);
    context->executeStrategy();

    return 0;
}