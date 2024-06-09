#ifndef WINBUTTON_H
#define WINBUTTON_H

#include "Button.h"
#include <iostream>

class WinButton : public Button{
    public:
        WinButton(){};

        void draw(){
            std::cout << "WinButton drawn..." << std::endl;
        }
};

#endif
