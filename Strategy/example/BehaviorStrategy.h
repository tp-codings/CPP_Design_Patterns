#ifndef BEHAVIORSTRATEGY_H
#define BEHAVIORSTRATEGY_H

class BehaviorStrategy
{
    public:
        BehaviorStrategy(){}
        virtual ~BehaviorStrategy(){}

        virtual void execute() = 0;
};

#endif
