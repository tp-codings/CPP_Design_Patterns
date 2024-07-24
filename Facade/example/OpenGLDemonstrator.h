#ifndef OPENGLDEMONSTRATOR_H
#define OPENGLDEMONSTRATOR_H

#include <iostream>

class OpenGLDemonstrator
{
    public:
       OpenGLDemonstrator(int GLFW_CONTEXT_VERSION_MAJOR, int GLFW_CONTEXT_VERSION_MINOR)
       : GLFW_CONTEXT_VERSION_MAJOR(GLFW_CONTEXT_VERSION_MAJOR), GLFW_CONTEXT_VERSION_MINOR(GLFW_CONTEXT_VERSION_MINOR){}
       ~OpenGLDemonstrator(){}

        void initLibraries()
        {
            std::cout << "--> OPENGLDEMONSTRATOR: Initializing libraries..." << std::endl;
        }

        void initializeContext()
        {
            std::cout << "--> OPENGLDEMONSTRATOR: Initializing context..." << std::endl;
        }

        void createWindow(int width, int height, const char* title) 
        {
            std::cout << "--> OPENGLDEMONSTRATOR: Creating window: " << title << " with dimensions " << width << "x" << height << "..." << std::endl;
        }

        void pollEvents() 
        {
            std::cout << "--> OPENGLDEMONSTRATOR: Polling events..." << std::endl;
        }

        void renderImage(int& counter)
        {
            std::cout << "--> OPENGLDEMONSTRATOR: Rendering image: " << counter++ << std::endl;
        }

        void swapBuffers() 
        {
            std::cout << "--> OPENGLDEMONSTRATOR: Swapping buffers..." << std::endl;
        }        

    private:
        int GLFW_CONTEXT_VERSION_MAJOR;
        int GLFW_CONTEXT_VERSION_MINOR;
};

#endif
