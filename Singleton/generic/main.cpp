#include "Singleton.h"

int main() {
    Singleton* singletonInstance1 = Singleton::getInstance();
    singletonInstance1->showMessage();

    Singleton* singletonInstance2 = Singleton::getInstance();
    singletonInstance2->showMessage();

    Singleton* singletonInstance3 = Singleton::getInstance();
    singletonInstance3->showMessage();

    return 0;
}