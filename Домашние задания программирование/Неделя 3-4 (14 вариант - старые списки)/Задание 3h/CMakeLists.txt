cmake_minimum_required(VERSION 3.5)

project(example3h_variant14 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(example3h_variant14 main.cpp)

install(TARGETS example3h_variant14
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
