cmake_minimum_required(VERSION 3.30)
project(Runtracks_C C)

set(CMAKE_C_STANDARD 99)

add_executable(Runtracks_C
        main.c
        Day01/myputstr.c
        Day01/my_strlen.c
        Day01/char_is_digit.c
        Day01/my_strcpy.c
        Day01/my_strdup.c
        Day01/my_strcmp.c
        Day01/trim.c
        Day01/split.c
        Day02/divide.c
        Day02/my_swap.c
        Day02/array_clone.c
        Day02/sort.c
        Day02/func_to_array.c
        Day02/delete_str_array.c
        Day02/job7.c
        Day02/job8.c
        Day03/my_atoi.c
        Day03/my_itoa.c
        Day03/my_power.c
        Day03/my_sqrt.c
        Day03/job05.c
        Day03/fibonacci.c
        Day03/itoa_hex.c
        Day04/manhattan.c
        Day04/manhattan.h
)

target_include_directories(Runtracks_C PRIVATE Day01 Day02 Day03)