#ifndef LINUXCHECKBOX_H
#define LINUXCHECKBOX_H

#include "Checkbox.h"
#include <iostream>

class LinuxCheckbox : public Checkbox{
    public:
        LinuxCheckbox(){};

        void draw(){
            std::cout << "LinuxCheckbox drawn..." << std::endl;
        }
};

#endif