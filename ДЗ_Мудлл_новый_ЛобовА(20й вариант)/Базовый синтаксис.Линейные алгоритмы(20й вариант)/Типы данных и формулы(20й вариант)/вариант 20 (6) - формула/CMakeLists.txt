cmake_minimum_required(VERSION 3.5)

project(funct_var20_6 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(funct_var20_6 main.cpp)

install(TARGETS funct_var20_6
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
