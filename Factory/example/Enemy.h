#ifndef ENEMY_H
#define ENEMY_H

class Enemy
{
    public:
        Enemy(){}
        virtual ~Enemy(){}

        virtual bool hit(int damage) = 0;
    
    protected:
        int health;
};

#endif 
