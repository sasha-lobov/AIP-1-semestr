cmake_minimum_required(VERSION 3.5)

project(Lobov_variant8_num3_task6 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Lobov_variant8_num3_task6 main.cpp)

install(TARGETS Lobov_variant8_num3_task6
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
