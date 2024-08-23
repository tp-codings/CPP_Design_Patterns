#include "Caretaker.h"

int main()
{
    Originator* originator = new Originator("Initial State");
    Caretaker* caretaker = new Caretaker(originator);

    std::cout << "DO SOME COMMANDS: " << std::endl << "---------------------------" << std::endl;
    caretaker->command("First State");
    caretaker->command("Second State");
    caretaker->command("Third State");

    std::cout << std::endl << "PERFORM SOME UNDO / REDO: " 
    << std::endl << "---------------------------" << std::endl;
    std::cout << "ORIGINATOR STATE: " << originator->getState() << std::endl;
    caretaker->undo();
    std::cout << "ORIGINATOR STATE: " << originator->getState() << std::endl;
    caretaker->redo();
    std::cout << "ORIGINATOR STATE: " << originator->getState() << std::endl;
    caretaker->redo();
    std::cout << "ORIGINATOR STATE: " << originator->getState() << std::endl;
    caretaker->undo();
    std::cout << "ORIGINATOR STATE: " << originator->getState() << std::endl;
    caretaker->undo();
    std::cout << "ORIGINATOR STATE: " << originator->getState() << std::endl;
    caretaker->undo();
    std::cout << "ORIGINATOR STATE: " << originator->getState() << std::endl;
    caretaker->undo();
    std::cout << "ORIGINATOR STATE: " << originator->getState() << std::endl;

    delete originator;
    delete caretaker;
    
    return 0;
}