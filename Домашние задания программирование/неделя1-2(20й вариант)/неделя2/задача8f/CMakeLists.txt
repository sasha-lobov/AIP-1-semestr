cmake_minimum_required(VERSION 3.5)

project(example8f LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(example8f main.cpp)

install(TARGETS example8f
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
