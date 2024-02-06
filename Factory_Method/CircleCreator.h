#include "ShapeCreator.h"
#include "Circle.h"

class CircleCreator : public ShapeCreator{
    public:
        Shape* createShape() override{
            return new Circle();
        };
        CircleCreator(){};
};

