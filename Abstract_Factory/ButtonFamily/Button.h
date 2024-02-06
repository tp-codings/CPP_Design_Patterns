#ifndef BUTTON_H
#define BUTTON_H

class Button{
    public:
        Button(){};
        virtual ~Button(){};

        virtual void draw() = 0;
};

#endif