#include "helloTriangle.hh"

#include <iostream>

int main()
{
    std::cout << "Start of Vulkan Sandbox program" << std::endl;
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

    std::cout << "End of Vulkan Sandbox program" << std::endl;

    return EXIT_SUCCESS;
}