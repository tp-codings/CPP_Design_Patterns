#ifndef ORIGINATOR_H
#define ORIGINATOR_H

#include <string>
#include <iostream>
#include <vector>

class Originator {
    public:
        class Memento {
            public:
                Memento(const std::string& state) 
                : state(state) {}

                friend class Originator;

            private:
                std::string state;

                std::string getState() const 
                {
                    return this->state;
                }
        };

        Originator(const std::string& initialState) 
        : state(initialState) {}

        void restoreState(Memento* memento) 
        {
            state = memento->getState();
        }

        Memento* saveState() const 
        {
            return new Memento(state);
        }

        std::string getState() const 
        {
            return state;
        }

        void setState(std::string newState)
        {
            this->state = newState;
        }

    private:
        std::string state;
};

#endif
