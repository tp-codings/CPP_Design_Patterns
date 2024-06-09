#ifndef CHECKBOX_H
#define CHECKBOX_H

class Checkbox{
    public:
        Checkbox(){};
        virtual ~Checkbox(){};

        virtual void draw() = 0;
};

#endif