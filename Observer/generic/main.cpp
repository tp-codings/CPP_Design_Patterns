#include "ConcreteObserverA.h"
#include "ConcreteObserverB.h"
#include "ConcreteSubject.h"

int main()
{
    ConcreteObserverA* concreteObserverA = new ConcreteObserverA();
    ConcreteObserverB* concreteObserverB = new ConcreteObserverB();
    ConcreteSubject* subject = new ConcreteSubject();

    subject->add(concreteObserverA);
    subject->add(concreteObserverB);

    std::cout << "---------- Observer: A + B ----------" << std::endl;
    subject->updateState(42);

    subject->remove(concreteObserverA);

    std::cout << "------------ Observer: B ------------" << std::endl;

    subject->updateState(4711);

    return 0;
}