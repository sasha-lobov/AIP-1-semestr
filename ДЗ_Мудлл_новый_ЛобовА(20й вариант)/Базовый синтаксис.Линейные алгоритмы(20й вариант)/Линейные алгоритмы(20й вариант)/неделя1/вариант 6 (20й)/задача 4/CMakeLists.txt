cmake_minimum_required(VERSION 3.5)

project(Lobov_variant6_num3_task4 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Lobov_variant6_num3_task4 main.cpp)

install(TARGETS Lobov_variant6_num3_task4
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
