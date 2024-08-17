#include "Context.h"
#include "ConcreteStateA.h"
#include <random>

int main()
{
    ConcreteStateA* initialState = new ConcreteStateA();
    Context* context = new Context(initialState);

    int a = 1;
    int b = 1;
    while(!context->execute(a, b))
    {
        a += 3;
        b *= 2;
    }
    context->execute(a, b);

    return 0;
}