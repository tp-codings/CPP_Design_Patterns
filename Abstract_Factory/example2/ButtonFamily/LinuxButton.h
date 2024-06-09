#ifndef LINUXBUTTON_H
#define LINUXBUTTON_H

#include <iostream>
#include "Button.h"

class LinuxButton : public Button{
    public:
        LinuxButton(){};

        void draw(){
            std::cout << "LinuxButton drawn..." << std::endl;
        }
};

#endif