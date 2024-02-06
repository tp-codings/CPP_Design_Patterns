#ifndef MACFACTORY_H
#define MACFACTORY_H

#include "../ButtonFamily/MacButton.h"
#include "../CheckboxFamily/MacCheckbox.h"
#include "../SliderFamily/MacSlider.h"
#include "GUIFactory.h"

class MacFactory : public GUIFactory{
    public:
        MacFactory(){};

        Button* createButton(){
            return new MacButton();
        }

        Checkbox* createCheckbox(){
            return new MacCheckbox();
        }

        Slider* createSlider(){
            return new MacSlider();
        }
};

#endif