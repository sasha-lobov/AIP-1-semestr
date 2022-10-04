cmake_minimum_required(VERSION 3.5)

project(Example10_variant14 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Example10_variant14 main.cpp)

install(TARGETS Example10_variant14
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
