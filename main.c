#include <stdio.h>
#include "unistd.h"
#include <string.h>
#include "Day01/myputstr.h"
#include "Day01/my_strlen.h"
#include "Day01/char_is_digit.h"
#include "Day01/my_strcpy.h"


int main(void) {
    // my_putchar('T');
    // my_putchar('\n');
    // my_putstr("Hello world\n");
    //
    // my_strlen("Mobius");
    // char_is_digit('3');
    // str_is_digit("24");

    // my_strcpy("Hello ", "Mark" );

    char src[] = "Oh Hi, Mark";
    char dest[50];

    my_strcpy(dest, src);
    printf("Source : %s\n", src);
    printf("Destination : %s\n", dest);
    return 0;
}

