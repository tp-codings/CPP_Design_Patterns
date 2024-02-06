#include "ShapeCreator.h"
#include "Circle.h"

class CircleCreator : public ShapeCreator{
    public:
        std::unique_ptr<Shape> createShape() override{
            return std::make_unique<Circle>();
        };
        CircleCreator(){};
};

