#include <stdio.h>
#include <stdlib.h>
#include "unistd.h"
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


void my_strtoupper(char *str) {
    for (int i = 0; str[i]; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32; // Conversion ASCII
    }
}

int main(void) {
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

    char s1[] = "Hello";
    char s2[] = "World";
    char *strs[] = {s1, s2, NULL};

    func_to_array(strs, my_strtoupper);



    return 0;
}

