#ifndef APPLICATION_H
#define APPLICATION_H

#include "Factories/GUIFactory.h"
#include "ButtonFamily/Button.h"
#include "CheckboxFamily/Checkbox.h"

class Application{
    public: 
        Application(GUIFactory* factory){
            this->_factory = factory;
            createUI();
        }

        void draw(){
            this->_button->draw();
            this->_checkbox->draw();
        }

    private:
        GUIFactory* _factory;
        Button* _button;
        Checkbox* _checkbox;

        void createUI(){
            this->_button = this->_factory->createButton();
            this->_checkbox = this->_factory->createCheckbox();
        }
};

#endif