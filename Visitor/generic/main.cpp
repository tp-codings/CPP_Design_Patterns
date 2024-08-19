#include "ConcreteVisitor.h"
#include "ConcreteElementA.h"
#include "ConcreteElementB.h"

int main()
{
    ConcreteVisitor* concreteVisitor = new ConcreteVisitor();
    ConcreteElementA* concreteElementA = new ConcreteElementA();
    ConcreteElementB* concreteElementB = new ConcreteElementB();

    concreteElementA->accept(concreteVisitor);
    concreteElementB->accept(concreteVisitor);

    return 0;
}