cmake_minimum_required(VERSION 3.5)

project(variant14Example1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(variant14Example1 main.cpp)

install(TARGETS variant14Example1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
