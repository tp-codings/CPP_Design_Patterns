#ifndef OPENGLFACADE_H
#define OPENGLFACADE_H

#include "OpenGLDemonstrator.h"

class OpenGLFacade
{
    public:
        OpenGLFacade(int width, int height, const char* title)
        {
            this->openGLDemonstrator = new OpenGLDemonstrator(3, 3);
            this->windowShouldClose = false;
            this->init(width, height, title);
        }
        ~OpenGLFacade()
        {
            std::cout << "FACADE: Destroying window and terminating library..." << std::endl;
            windowShouldClose = true;
        }

        void pollEvents() 
        {
            this->openGLDemonstrator->pollEvents();
        }

        void swapBuffers() 
        {
            this->openGLDemonstrator->swapBuffers();
        }

        bool shouldWindowClose()
        {
            return this->windowShouldClose;
        }
    private:
        bool windowShouldClose;
        OpenGLDemonstrator* openGLDemonstrator;

        void init(int width, int height, const char* title)
        {
            std::cout << "FACADE: Initialize OpenGLDemonstrator..." << std::endl;

            this->openGLDemonstrator->initLibraries();
            this->openGLDemonstrator->initializeContext();
            this->openGLDemonstrator->createWindow(width, height, title);
        }
};

#endif
