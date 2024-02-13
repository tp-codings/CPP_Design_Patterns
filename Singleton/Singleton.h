#ifndef SINGLETON_H
#define SINGLETON_H

#include <iostream>

class Singleton{

    public:
        static Singleton* getInstance() {
            if (!instance) {
                instance = new Singleton();
            }
            return instance;
        }

        void showMessage() {
            std::cout << "Hello from the Singleton instance!" << std::endl;
        }

    private:
        Singleton(){
            std::cout << "Singleton built" << std::endl;
        }

        static Singleton* instance;
};

Singleton* Singleton::instance = nullptr;

#endif