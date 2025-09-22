cmake_minimum_required(VERSION 3.20)
project(VulkanSandbox)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

SET(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

ADD_SUBDIRECTORY(src)

find_package(Vulkan REQUIRED)
target_link_libraries(VulkanSandbox PRIVATE Vulkan::Vulkan)

find_package(glm CONFIG REQUIRED)
target_link_libraries(VulkanSandbox PRIVATE glm::glm)

find_package(glfw3 CONFIG REQUIRED)
target_link_libraries(VulkanSandbox PRIVATE glfw)

find_package(tinyobjloader CONFIG REQUIRED)
target_link_libraries(VulkanSandbox PRIVATE tinyobjloader::tinyobjloader)

SET(ENV_ROOT ${CMAKE_CURRENT_DIR})



IF(MSVC)
    set_property(TARGET VulkanSandbox PROPERTY VS_DEBUGGER_WORKING_DIRECTORY "${CMAKE_SOURCE_DIR}/bin")
ENDIF()