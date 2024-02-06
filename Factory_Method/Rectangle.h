#include "Shape.h"
#include <iostream>

class Rectangle : public Shape{
    public:
        Rectangle(){};
        void draw() override{
            std::cout << "Rectangle drawn..." << std::endl;
        };

};