#include "ConcreteMediator.h"
#include "ConcreteColleagueA.h"
#include "ConcreteColleagueB.h"

int main()
{
    ConcreteColleagueA* concreteColleagueA = new ConcreteColleagueA();
    ConcreteColleagueB* concreteColleagueB = new ConcreteColleagueB();

    Mediator* concreteMediator = new ConcreteMediator(concreteColleagueA, concreteColleagueB);

    std::cout << "------------- C O N C R E T E    C O L L E A G U E   A -------------" << std::endl;
    concreteColleagueA->operationA();

    std::cout << "------------- C O N C R E T E    C O L L E A G U E   B -------------" << std::endl;
    concreteColleagueB->operationA();

    return 0;
}