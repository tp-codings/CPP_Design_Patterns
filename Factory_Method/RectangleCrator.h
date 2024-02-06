#include "ShapeCreator.h"
#include "Rectangle.h"

class RectangleCreator : public ShapeCreator{
    public:
        std::unique_ptr<Shape> createShape() override{
            return std::make_unique<Rectangle>();
        };
        RectangleCreator(){};
};
