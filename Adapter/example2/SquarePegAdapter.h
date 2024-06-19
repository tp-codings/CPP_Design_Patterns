#ifndef SQUAREPEGADAPTER_H
#define SQUAREPEGADAPTER_H

#include "SquarePeg.h"
#include "RoundPeg.h"
#include <math.h>

class SquarePegAdapter : public RoundPeg{
    private:
        SquarePeg *_peg;
    
    public: 
        SquarePegAdapter(SquarePeg* peg) : RoundPeg(peg->getWidth()), _peg(peg) {}


        int getRadius(){
            return this->_peg->getWidth() * sqrt(2) / 2;
        }
};

#endif