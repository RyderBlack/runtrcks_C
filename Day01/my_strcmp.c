#include "my_strcmp.h"
#include <stdio.h>


int my_strcmp(char *s1, char *s2) {
    while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2) {
        s1++;
        s2++;
    }

    printf("The remaining strings are %s and %s \n", s1, s2);
    return (*s1 - *s2);
}