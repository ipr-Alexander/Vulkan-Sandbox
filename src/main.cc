#include "helloTriangle.hh"

#include <iostream>

int main()
{
    HelloTriangleApplication app;

    try
    {
        app.run();
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
        return EXIT_FAILURE;
    }

    std::cout << "Hello World" << std::endl;

    return EXIT_SUCCESS;
}