cmake_minimum_required(VERSION 3.27)
project(lab_2)

set(CMAKE_CXX_STANDARD 23)

add_executable(lab_2 main.cpp
        auto.h
        clients.h
        personal.h
        clients.cpp)
