cmake_minimum_required(VERSION 3.7...3.22)

if(${CMAKE_VERSION} VERSION_LESS 3.12)
    cmake_policy(VERSION ${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION})
endif()

project(CMakeBoilerplate
    VERSION 1.0
    DESCRIPTION "Boilerplate for a C++ project"
    LANGUAGES CXX)

add_executable(hello src/main.cpp)
