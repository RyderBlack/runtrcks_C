#include <stdio.h>
#include <stdlib.h>
#include "unistd.h"
#include <string.h>
#include "Day01/myputstr.h"
#include "Day01/my_strlen.h"
#include "Day01/char_is_digit.h"
#include "Day01/my_strcpy.h"
#include "Day01/my_strdup.h"


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


    const char* original = "Oh, Hi Mark!";
    char* copy = my_strdup(original);

    printf("Original string : %s\n", original);
    printf("Copied String  : %s\n", copy);

    free(copy);
    return 0;
}

