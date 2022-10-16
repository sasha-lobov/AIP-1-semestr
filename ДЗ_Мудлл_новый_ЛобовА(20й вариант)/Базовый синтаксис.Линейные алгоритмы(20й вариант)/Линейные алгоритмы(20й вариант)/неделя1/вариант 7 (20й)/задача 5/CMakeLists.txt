cmake_minimum_required(VERSION 3.5)

project(Lobov_variant7_num3_task5 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Lobov_variant7_num3_task5 main.cpp)

install(TARGETS Lobov_variant7_num3_task5
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
