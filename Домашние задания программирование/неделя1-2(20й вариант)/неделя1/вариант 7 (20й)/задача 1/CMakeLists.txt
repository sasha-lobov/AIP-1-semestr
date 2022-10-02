cmake_minimum_required(VERSION 3.5)

project(LobovA_variant6_num1_task1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(LobovA_variant6_num1_task1 main.cpp)

install(TARGETS LobovA_variant6_num1_task1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
