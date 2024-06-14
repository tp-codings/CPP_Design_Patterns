//Concrete Protoype B

#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"

class Circle : public Shape{
    public:
        Circle(){
            this->_specification += "Prototype: \n";
        }

        Circle(Circle* c){
            this->_radius = c->_radius;
            this->_color = c->_color;
            this->_specification += "Copy: \n";
        }

        void setSize(int radius){
            this->_radius = radius;
        }

        void setColor(std::string color){
            this->_color = color;
        }
    
        Circle* clone() override{
            return new Circle(this);
        }

        std::string getSpecification() override{
            this->_specification += "X: " + std::to_string(this->_x) + "\nY: " + std::to_string(this->_y) + "\nColor: " + this->_color;
            this->_specification += "\nRadius: " + std::to_string(this->_radius);
            return this->_specification;
        }

    private:
        int _radius;
        std::string _specification;
};

#endif