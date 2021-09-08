cmake_minimum_required(VERSION 3.20)
project(queens C)

set(CMAKE_C_STANDARD 90)

add_executable(queens src/main.c include/queens.h "src/init and destroy.c" src/print.c)
