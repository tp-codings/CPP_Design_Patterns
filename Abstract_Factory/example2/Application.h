#ifndef APPLICATION_H
#define APPLICATION_H

#include "Factories/GUIFactory.h"
#include "ButtonFamily/Button.h"
#include "CheckboxFamily/Checkbox.h"

//just need to be changed, when additional functionality comes to the UI, but not for different OS amk

class Application{
    public: 
        Application(GUIFactory* factory){
            this->_factory = factory;
            createUI();
        }

        void draw(){
            this->_button->draw();
            this->_checkbox->draw();
            this->_slider->draw();
        }

    private:
        GUIFactory* _factory;
        Button* _button;
        Checkbox* _checkbox;
        Slider* _slider;

        void createUI(){
            this->_button = this->_factory->createButton();
            this->_checkbox = this->_factory->createCheckbox();
            this->_slider = this->_factory->createSlider();
        }
};

#endif
