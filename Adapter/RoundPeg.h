#ifndef ROUNDPEG_H
#define ROUNDPEG_H

class RoundPeg{
    private:
        int _radius;

    public:
        RoundPeg(int radius) : _radius(radius){}

        int getRadius(){
            return this->_radius;
        }
};

#endif