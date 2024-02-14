#ifndef ROUNDHOLE_H
#define ROUNDHOLE_H

#include "RoundPeg.h"

class RoundHole{
    private:
        int _radius;

    public:
        RoundHole(int radius) : _radius(radius){}

        int getRadius(){
            return this->_radius;
        }

        bool fits(RoundPeg peg){
            return peg.getRadius() <= this->_radius;
        }
};

#endif