#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "Day01/myputstr.h"
#include "Day01/my_strlen.h"
#include "Day01/char_is_digit.h"
#include "Day01/my_strcmp.h"
#include "Day01/my_strcpy.h"
#include "Day01/my_strdup.h"
#include "Day01/trim.h"
#include "Day01/split.h"
#include "Day02/divide.h"
#include "Day02/my_swap.h"
#include "Day02/array_clone.h"
#include "Day02/sort.h"
#include "Day02/func_to_array.h"
#include "Day02/delete_str_array.h"
#include "Day02/job7.h"
#include "Day02/job8.h"
#include "Day03/my_atoi.h"
#include "Day03/my_itoa.h"
#include "Day03/my_power.h"
#include "Day03/my_sqrt.h"
#include "Day03/job05.h"
#include "Day03/fibonacci.h"
#include "Day03/itoa_hex.h"
#include "Day04/manhattan.h"


// void my_strtoupper(char *str) {
//     for (int i = 0; str[i]; i++) {
//         if (str[i] >= 'a' && str[i] <= 'z')
//             str[i] -= 32; // Conversion ASCII
//     }
// }

int main(int argc, char **argv) {
    // my_putchar('T');
    // my_putchar('\n');
    // my_putstr("Hello world\n");
    //
    // my_strlen("Mobius");
    // char_is_digit('3');
    // str_is_digit("24");

    // my_strcpy("Hello ", "Mark" );

    // char src[] = "Oh Hi, Mark";
    // char dest[50];
    //
    // my_strcpy(dest, src);
    // printf("Source : %s\n", src);
    // printf("Destination : %s\n", dest);


    // const char* original = "Oh, Hi Mark!";
    // char* copy = my_strdup(original);
    //
    // printf("Original string : %s\n", original);
    // printf("Copied String  : %s\n", copy);
    //
    // free(copy);


    // char *s1 = "Bonjour";
    // char *s2 = "Bonsoir";
    // int result = my_strcmp(s1, s2);
    // printf("%s vs %s -> %d \n", s1, s2, result);


    // char *s1 = " hello world ";
    // char *result1 = trim(s1);
    // if (result1 == NULL) {
    //     printf("error allocating memory!! \n");
    // } else {
    //     printf("Result is: \"%s\" -> \"%s\"\n", s1, result1);
    //     free(result1);
    // }

    // char *str = " Oh, Hi Mark!";
    // char **result = split(str);
    // if (result == NULL) {
    //     printf("error allocating memory !\n");
    //     return 1;
    // }
    //
    // printf("String : \"%s\"\n", str);
    // for (int i = 0; result[i] != NULL; i++) {
    //     printf("Word %d : \"%s\"\n", i + 1, result[i]);
    // }
    //
    // // FREE MEMORY !!!!!
    // for (int i = 0; result[i] != NULL; i++) {
    //     free(result[i]);
    // }
    // free(result);

    // int a = 30;
    // my_divide(&a);
    // printf("Result is : %d\n", a);

    // int x = 10;
    // int y = 20;
    //
    // printf("original : x = %d, y = %d\n", x, y);
    // swap(&x, &y);
    // printf("after swap : x = %d, y = %d\n", x, y);

    // char *original[] = {
    //     "Hello",
    //     "world",
    //     "this",
    //     "is",
    //     "Cloning",
    //     NULL
    // };
    //
    // int n = 3;
    // char **copy = array_clone(original, n);
    //
    //
    // printf("cloned array :\n");
    // for (int i = 0; copy[i] != NULL; i++) {
    //     printf("copy[%d] = %s\n", i, copy[i]);
    // }
    //
    // for (int i = 0; copy[i] != NULL; i++) {
    //     free(copy[i]);
    // }
    // free(copy);

    // char *words[] = {
    //     "banana",
    //     "apple",
    //     "orange",
    //     "kiwi",
    //     NULL
    // };
    //
    // my_sort(words);
    //
    // printf("sorted array :\n");
    // for (int i = 0; words[i] != NULL; i++) {
    //     printf("%s\n", words[i]);
    // }

    // char s1[] = "Hello";
    // char s2[] = "World";
    // char *strs[] = {s1, s2, NULL};
    //
    // func_to_array(strs, my_strtoupper);

    // char **array;
    // int i;
    //
    // array = malloc(sizeof(char *) * 4);
    // array[0] = strdup("Hello");
    // array[1] = strdup("World");
    // array[2] = strdup("LaPlateforme");
    // array[3] = NULL;
    //
    // i = 0;
    // while (array[i] != NULL)
    // {
    //     printf("%s\n", array[i]);
    //     i++;
    // }
    //
    // delete_str_array(&array);
    //
    // if (array == NULL)
    //     printf("Array free and back to NULL\n");

    // if (argc < 2) return 0;
    //
    // for (int i = 1; i < argc; i++) {
    //     char *copy = malloc(sizeof(char) * (strlen(argv[i]) + 1));
    //     for (int j = 0; argv[i][j]; j++)
    //         copy[j] = argv[i][j];
    //     copy[strlen(argv[i])] = '\0';
    //
    //     strtolower(copy);
    //     my_putstr(copy);
    //     free(copy);
    // }

    // job8(argc, argv);


    // int res;
    // res = my_atoi("123");
    // printf("Result: %d\n", res);
    // res = my_atoi("-42");
    // printf("Result: %d\n", res);


    // char *s;
    //
    // s = my_itoa(1234);
    // printf("Result: %s\n", s);
    // free(s);
    // s = my_itoa(-42);
    // printf("Result: %s\n", s);
    // free(s);
    // s = my_itoa(0);
    // printf("Result: %s\n", s);
    // free(s);

    // int res;
    //
    // res = power(2, 3);
    // printf("2^3 = %d\n", res);
    //
    // res = power(5, 0);
    // printf("5^0 = %d\n", res);
    //
    // res = power(3, 4);
    // printf("3^4 = %d\n", res);
    //
    // res = power(2, -1);
    // printf("2^-1 = %d\n", res);

    // int res;
    //
    // res = my_sqrt(4);
    // printf("sqrt(4) = %d\n", res);
    // res = my_sqrt(16);
    // printf("sqrt(16) = %d\n", res);
    // res = my_sqrt(14);
    // printf("sqrt(14) = %d\n", res);
    // res = my_sqrt(-9);
    // printf("sqrt(-9) = %d\n", res);

    // unsigned long long result;
    // if (argc == 2)
    // {
    //     result = get_factorial(argv[1]);
    //     printf("Factorial: %llu\n", result);
    // }

    // char *result;
    // int num;
    //
    // if (argc == 2)
    // {
    //     num = atoi(argv[1]);
    //     result = itoa_hex(num);
    //     printf("Hexadecimal: %s\n", result);
    //     free(result);
    // }


    point p1 = {2, 3};
    point p2 = {5, 1};
    int d = manhattan(p1, p2);
    printf("Distance de Manhattan entre p1 et p2 : %d\n", d);

    point p3 = {-2, -4};
    point p4 = {1, 2};
    printf("Distance de Manhattan entre p3 et p4 : %d\n", manhattan(p3, p4));


    return 0;
}

