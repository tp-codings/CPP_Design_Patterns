#include "Settings.h"

int main() {
    Settings* singletonInstance1 = Settings::getInstance();
    singletonInstance1->setBrightness(60);

    Settings* singletonInstance2 = Settings::getInstance();
    singletonInstance2->setVolume(25);

    Settings* singletonInstance3 = Settings::getInstance();
    singletonInstance3->dump();

    return 0;
}