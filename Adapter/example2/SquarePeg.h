#ifndef SQUAREPEG_H
#define SQUAREPEG_H

class SquarePeg{
    private:
        int _width; 
        
    public:
        SquarePeg(int width) : _width(width){}

        int getWidth(){
            return this->_width;
        }
};

#endif