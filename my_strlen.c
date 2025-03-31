#include "my_strlen.h"
#include <stdio.h>


int my_strlen(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        printf("This is : %c\n", str[i]);
        i++;
    }

    printf("Length of this string is : %d", i);
    return i;
}





