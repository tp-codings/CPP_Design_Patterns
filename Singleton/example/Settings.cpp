#include "Settings.h"

#include <iostream>

//---------------- P U B L I C ----------------
Settings*
Settings::getInstance()
{
    if (!settingsInstance) {
        settingsInstance = new Settings();
    }
    return settingsInstance;
}

void
Settings::dump()     
{ 
    std::cout << "---------------- S E T T I N G S ----------------\nVolume: " 
    << this->volume << std::endl << "Brightness: " << this->brightness << std::endl;
}

//---------------- P R I V A T E ----------------
Settings::Settings()
{
    std::cout << "Settings initialized" << std::endl;
    this->volume = 50;
    this->brightness = 70;
}

//---------------- S T A T I C ----------------
Settings* Settings::settingsInstance = nullptr;
