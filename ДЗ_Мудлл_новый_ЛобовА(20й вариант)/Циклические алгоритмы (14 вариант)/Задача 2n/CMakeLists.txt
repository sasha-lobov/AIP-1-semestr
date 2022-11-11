cmake_minimum_required(VERSION 3.5)

project(example2n_14var LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(example2n_14var main.cpp)

install(TARGETS example2n_14var
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
