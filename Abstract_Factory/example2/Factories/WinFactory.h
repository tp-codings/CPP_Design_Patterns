#ifndef WINFACTORY_H
#define WINFACTORY_H

#include "GUIFactory.h"
#include "../ButtonFamily/WinButton.h"
#include "../CheckboxFamily/WinCheckbox.h"
#include "../SliderFamily/WinSlider.h"

class WinFactory : public GUIFactory{
    public:
        WinFactory(){};

        Button* createButton(){
            return new WinButton();
        }

        Checkbox* createCheckbox(){
            return new WinCheckbox();
        }

        Slider* createSlider(){
            return new WinSlider();
        }
};

#endif