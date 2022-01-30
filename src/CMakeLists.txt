add_library(fizzlib STATIC fizzbuzz.cpp)
target_include_directories(fizzlib PUBLIC ../include)
target_compile_features(fizzlib PUBLIC cxx_std_17)

add_executable(fizzbuzz main.cpp)
target_link_libraries(fizzbuzz PUBLIC fizzlib)
