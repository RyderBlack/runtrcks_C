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
        Day01/my_strcmp.c
        Day01/my_strcmp.h
        Day01/trim.c
        Day01/trim.h
        Day01/split.c
        Day01/split.h
        Day02/divide.c
        Day02/divide.h
        Day02/my_swap.c
        Day02/my_swap.h
        Day02/array_clone.c
        Day02/array_clone.h
        Day02/sort.c
        Day02/sort.h
)
