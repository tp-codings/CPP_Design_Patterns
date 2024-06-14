//Concrete Prototype A

#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"
#include <string>

class Rectangle : public Shape{
    public:
        Rectangle(){
            this->_specification += "Prototype: \n";
        }

        Rectangle(Rectangle* r){
            this->_width = r->_width;
            this->_height = r->_height;
            this->_color = r->_color;
            this->_specification += "Copy: \n";
        }

        void setSize(int width, int height){
            this->_width = width;
            this->_height = height;
        }

        void setColor(std::string color){
            this->_color = color;
        }

        Rectangle* clone() override{
            return new Rectangle(this);
        }

        std::string getSpecification() override{
            this->_specification += "X: " + std::to_string(this->_x) + "\nY: " + std::to_string(this->_y) + "\nColor: " + this->_color;
            this->_specification += "\nWidth: " + std::to_string(this->_width) + "\nHeight: " + std::to_string(this->_height);
            return this->_specification;
        }

    private:
        int _width, _height;
        std::string _specification;
};

#endif