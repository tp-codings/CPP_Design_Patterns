#ifndef MACCHECKBOX_H
#define MACCHECKBOX_H

#include "Checkbox.h"
#include <iostream>

class MacCheckbox : public Checkbox{
    public:
        MacCheckbox(){};

        void draw(){
            std::cout << "MacCheckbox drawn..." << std::endl;
        }
};

#endif