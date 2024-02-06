#ifndef LINUXFACTORY_H
#define LINUXFACTORY_H

#include "GUIFactory.h"
#include "../ButtonFamily/LinuxButton.h"
#include "../CheckboxFamily/LinuxCheckbox.h"
#include "../SliderFamily/LinuxSlider.h"

class LinuxFactory : public GUIFactory{
    public:
        LinuxFactory(){};

        Button* createButton(){
            return new LinuxButton();
        }

        Checkbox* createCheckbox(){
            return new LinuxCheckbox();
        }

        Slider* createSlider(){
            return new LinuxSlider();
        }
};

#endif