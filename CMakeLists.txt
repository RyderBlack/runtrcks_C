cmake_minimum_required(VERSION 3.30)
project(Runtracks_C C)

set(CMAKE_C_STANDARD 99)

add_executable(Runtracks_C main.c
        myputstr.c
        myputstr.h
)
