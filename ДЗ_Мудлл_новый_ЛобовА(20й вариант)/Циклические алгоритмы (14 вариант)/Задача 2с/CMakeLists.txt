cmake_minimum_required(VERSION 3.5)

project(example_2c_var14 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(example_2c_var14 main.cpp)

install(TARGETS example_2c_var14
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
