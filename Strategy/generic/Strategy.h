#ifndef STRATEGY_H
#define STRATEGY_H

class Strategy
{
    public:
        Strategy(){}
        virtual ~Strategy(){}

        virtual void execute() = 0;
};

#endif
