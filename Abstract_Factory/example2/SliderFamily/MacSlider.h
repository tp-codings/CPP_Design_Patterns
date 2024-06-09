#ifndef MACSLIDER_H
#define MACSLIDER_H

#include "Slider.h"
#include <iostream>

class MacSlider : public Slider{
    public:
        MacSlider(){};

        void draw(){
            std::cout << "MacSlider drawn..." << std::endl;
        }
};

#endif