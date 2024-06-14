//Prototype Interface

#ifndef SHAPE_H
#define SHAPE_H

#include <string>

class Shape{
    public:
        Shape(){
            this->_x = 0;
            this->_y = 0;
            this->_color = "NAN";
        }

        Shape(Shape* s){
            this->_x = s->_x;
            this->_y = s->_y;
            this->_color = s->_color;
        }

        virtual Shape* clone() = 0;
        virtual std::string getSpecification() = 0;

    protected:
        int _x, _y;
        std::string _color;
};

#endif