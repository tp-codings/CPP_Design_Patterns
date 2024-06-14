#ifndef ABSTRACTPROTOTYPE_H
#define ABSTRACTPROTOTYPE_H

class AbstractPrototype
{
    public:
        AbstractPrototype(){}
        virtual ~AbstractPrototype(){}
        
        virtual AbstractPrototype* clone() = 0; 
};

#endif