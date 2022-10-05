cmake_minimum_required(VERSION 3.5)

project(example3E_var20_ned6 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(example3E_var20_ned6 main.cpp)

install(TARGETS example3E_var20_ned6
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
