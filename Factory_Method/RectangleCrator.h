#include "ShapeCreator.h"
#include "Rectangle.h"

class RectangleCreator : public ShapeCreator{
    public:
        Shape* createShape() override{
            return new Rectangle;
        };
        RectangleCreator(){};
};
