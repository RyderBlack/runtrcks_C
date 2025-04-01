#include <stdio.h>
#include "char_is_digit.h"


int char_is_digit(char c)
{
    if (c >= '0' && c <= '9')
    {
        printf("%c is a digit\n", c);
        return 1;
    }
    printf("This value is not a digit\n", c);
    return 0;
}

int str_is_digit(char *str)
{
    if (str[0] == '\0') {
        printf("String is empty\n");
        return 0;
    }

    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] < '0' || str[i] > '9'){
            printf("%s doesn't contain digits\n", str);
            return 0;
        }
        i++;
    }
    printf("%s only contains digits\n", str);
    return 1;
}

