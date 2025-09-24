cmake_minimum_required(VERSION 3.20)
project(VulkanSandbox)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

SET(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

#ADD_EXECUTABLE(VulkanSandbox main.cc)
find_package(Vulkan REQUIRED)
#include_directories(${Vulkan_INCLUDE_DIR})
find_package(glm CONFIG REQUIRED)
find_package(glfw3 CONFIG REQUIRED)
find_package(tinyobjloader CONFIG REQUIRED)

ADD_SUBDIRECTORY(src)

target_include_directories(VulkanSandbox PRIVATE ${Vulkan_INCLUDE_DIRS})

target_link_libraries(VulkanSandbox PRIVATE Vulkan::Vulkan glm::glm-header-only glfw tinyobjloader::tinyobjloader)

SET(ENV_ROOT ${CMAKE_CURRENT_DIR})

IF(MSVC)
    set_property(TARGET VulkanSandbox PROPERTY VS_DEBUGGER_WORKING_DIRECTORY "${CMAKE_SOURCE_DIR}/bin")
ENDIF()