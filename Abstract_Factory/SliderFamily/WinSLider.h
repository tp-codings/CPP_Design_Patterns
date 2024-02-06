#ifndef WINSLIDER_H
#define WINSLIDER_H

#include "Slider.h"
#include <iostream>

class WinSlider : public Slider{
    public:
        WinSlider(){};

        void draw(){
            std::cout << "WinSlider drawn..." << std::endl;
        }
};

#endif