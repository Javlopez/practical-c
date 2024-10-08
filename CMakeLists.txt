cmake_minimum_required(VERSION 3.29)
project(app1 C)

set(CMAKE_C_STANDARD 11)

add_executable(app1 memory/main.c
        memory/dynamic_array.h
        memory/dynamic_array.c)
