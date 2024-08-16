#include "ConcreteCommandA.h"
#include "ConcreteCommandB.h"
#include "Sender.h"
#include "Receiver.h"

int main()
{
    Sender* sender = new Sender();
    Receiver* receiver = new Receiver();


    for(int i = 0; i < 5; i++)
    {
        sender->executeCommand(new ConcreteCommandA(receiver));
    }
    sender->undo();
    sender->undo();
    sender->undo();

    sender->executeCommand(new ConcreteCommandB(receiver));
    sender->undo();
    sender->undo();
    sender->undo();
    sender->undo();

    return 0;
}
