cmake_minimum_required(VERSION 3.30)
project(Runtracks_C C)

set(CMAKE_C_STANDARD 99)

add_executable(Runtracks_C main.c
        Day01/myputstr.c
        Day01/myputstr.h
        Day01/my_strlen.c
        Day01/my_strlen.h
        Day01/char_is_digit.c
        Day01/char_is_digit.h
        Day01/my_strcpy.c
        Day01/my_strcpy.h
        Day01/my_strdup.c
        Day01/my_strdup.h
)
