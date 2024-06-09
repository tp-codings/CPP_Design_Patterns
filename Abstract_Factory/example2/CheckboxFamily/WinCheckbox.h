#ifndef WINCHECKBOX_H
#define WINCHECKBOX_H

#include "Checkbox.h"
#include <iostream>

class WinCheckbox : public Checkbox{
    public:
        WinCheckbox(){};

        void draw(){
            std::cout << "WinCheckbox drawn..." << std::endl;
        }

};

#endif