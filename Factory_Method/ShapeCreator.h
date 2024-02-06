#include "Shape.h"
#include <memory>

#ifndef SHAPECREATOR_H
#define SHAPECREATOR_H

class ShapeCreator {
    public:
    ShapeCreator(){};
    virtual ~ShapeCreator(){};
    virtual std::unique_ptr<Shape> createShape() = 0; 
};

#endif // SHAPECREATOR_H
