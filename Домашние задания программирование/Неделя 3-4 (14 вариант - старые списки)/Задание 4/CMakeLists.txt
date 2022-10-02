cmake_minimum_required(VERSION 3.5)

project(example4_var14_ned3 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(example4_var14_ned3 main.cpp)

install(TARGETS example4_var14_ned3
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
