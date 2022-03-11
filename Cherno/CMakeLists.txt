cmake_minimum_required(VERSION 3.21)
project(Chemo)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_CXX_FLAGS -m64)

add_executable(Chemo main.cpp)

# Directories for include headers files.
include_directories("/Users/himalayj/CLionProjects/AdvancedCPP/Cherno/Dependencies/GLFW/include")

# Static link.
#target_link_libraries(Chemo
#        "/Users/himalayj/CLionProjects/AdvancedCPP/Cherno/Dependencies/GLFW/lib-x86_64/libglfw3.a")

# Dynamic link
target_link_libraries(Chemo
        "/Users/himalayj/CLionProjects/AdvancedCPP/Cherno/Dependencies/GLFW/lib-x86_64/libglfw.3.dylib")
