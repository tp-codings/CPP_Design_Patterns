#include "OpenGLFacade.h"

int main()
{
    OpenGLFacade* openglFacade = new OpenGLFacade(400, 400, "myOpenGLFacade");

    int imageCount = 0;

    std::cout << "Process started!" << std::endl;

    while(!openglFacade->shouldWindowClose())
    {

        openglFacade->pollEvents();

        std::cout << "Rendering image: " << imageCount++ << std::endl;

        openglFacade->swapBuffers();

        if(imageCount > 5)
        {
            delete(openglFacade);
        }
    }

    std::cout << "Process terminated!" << std::endl;

    return 0;
}