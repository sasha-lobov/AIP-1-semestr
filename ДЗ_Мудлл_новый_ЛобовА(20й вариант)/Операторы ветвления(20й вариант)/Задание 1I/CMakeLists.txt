cmake_minimum_required(VERSION 3.5)

project(example1I_var20_ned5 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(example1I_var20_ned5 main.cpp)

install(TARGETS example1I_var20_ned5
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
