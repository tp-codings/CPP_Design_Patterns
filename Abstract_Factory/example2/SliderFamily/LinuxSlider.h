#ifndef LINUXSLIDER_H
#define LINUXSLIDER_H

#include "Slider.h"
#include <iostream>

class LinuxSlider : public Slider{
    public:
        LinuxSlider(){};

        void draw(){
            std::cout << "LinuxSlider drawn..." << std::endl;
        }
};

#endif