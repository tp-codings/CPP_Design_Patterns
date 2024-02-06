#include "Shape.h"
#include <iostream>

class Circle : public Shape{
    public:
        Circle(){};
        void draw() override {
            std::cout << "Circle drawn..." << std::endl;
        };
};
