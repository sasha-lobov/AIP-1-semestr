cmake_minimum_required(VERSION 3.5)

project(Example1F_var20_nedelya5 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Example1F_var20_nedelya5 main.cpp)

install(TARGETS Example1F_var20_nedelya5
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
