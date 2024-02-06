#ifndef MacBUTTON_H
#define MacBUTTON_H

#include "Button.h"
#include <iostream>

class MacButton : public Button{
    public:
        MacButton(){};

        void draw(){
            std::cout << "MacButton drawn..." << std::endl;
        }
};

#endif