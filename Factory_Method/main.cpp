#include <iostream>
#include "CircleCreator.h"
#include "RectangleCrator.h"
#include <vector>
#include <memory>

int main() {
    RectangleCreator rectFactory;
    CircleCreator circleFactory; 

    std::vector<Shape*> shapes; 

    shapes.push_back(rectFactory.createShape());
    shapes.push_back(circleFactory.createShape());

    for(auto &i : shapes) {
        i->draw(); 
    }
    return 0;
}