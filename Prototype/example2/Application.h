#ifndef APPLICATION_H
#define APPLICATION_H

#include "Circle.h"
#include "Rectangle.h"
#include "Shape.h"
#include <vector>
#include <iostream>

class Application{
    public: 
        Application(){
            Circle* circle = new Circle();
            circle->setSize(10);
            this->_shapes.push_back(circle);

            Circle* anotherCircle = circle->clone();
            this->_shapes.push_back(anotherCircle);

            Rectangle* rectangle = new Rectangle();
            rectangle->setSize(23, 12);
            this->_shapes.push_back(rectangle);
            
            Rectangle* anotherRectangle = rectangle->clone();
            this->_shapes.push_back(anotherRectangle);

            Rectangle* yetAnotherRectangle = anotherRectangle->clone();
            yetAnotherRectangle->setColor("Black");

            this->_shapes.push_back(yetAnotherRectangle);

            Circle* anotherNewCircle = new Circle();
            anotherNewCircle->setColor("Blue");
            anotherNewCircle->setSize(1000);
            Circle* copyOfAnotherNewCircle = anotherNewCircle->clone();

            this->_shapes.push_back(anotherNewCircle);
            this->_shapes.push_back(copyOfAnotherNewCircle);

        }

        void printAllShapes(){
            for(auto i : this->_shapes){
                std::cout << i->getSpecification() << std::endl << "-------" << std::endl;
            }
        }

    private:
        std::vector<Shape*> _shapes;
};

#endif