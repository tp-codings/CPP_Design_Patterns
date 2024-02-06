#ifndef GUIFACTORY_H
#define GUIFACTORY_H

#include "../CheckboxFamily/Checkbox.h"
#include "../ButtonFamily/Button.h"
#include "../SliderFamily/Slider.h"


class GUIFactory{
    public:
        GUIFactory(){};
        virtual ~GUIFactory(){};
        
        virtual Button* createButton() = 0;
        virtual Checkbox* createCheckbox() = 0;
        virtual Slider* createSlider() = 0;
};

#endif