#include "Singleton.h"

int main() {
    Singleton* singletonInstance1 = Singleton::getInstance();
    singletonInstance1->showMessage();

    Singleton* singletonInstance2 = Singleton::getInstance();
    singletonInstance2->showMessage();

    return 0;
}