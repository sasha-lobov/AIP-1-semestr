cmake_minimum_required(VERSION 3.5)

project(example15 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(example15 main.cpp)

install(TARGETS example15
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
