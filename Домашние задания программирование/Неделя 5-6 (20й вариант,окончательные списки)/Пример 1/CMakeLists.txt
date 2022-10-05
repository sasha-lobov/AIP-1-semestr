cmake_minimum_required(VERSION 3.5)

project(example1_ned6_var20 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(example1_ned6_var20 main.cpp)

install(TARGETS example1_ned6_var20
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
