cmake_minimum_required(VERSION 3.8)

project(FizzBuzz LANGUAGES CXX)

add_subdirectory(src)

if(CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME)
    include(CTest)

    if (BUILD_TESTING)
        include(GoogleTest)
        add_subdirectory(tests)
    endif()
endif()
