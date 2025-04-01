#include "my_strcpy.h"
#include <stdio.h>



char *my_strcpy(char *dest, char *src)
{
    char *original_dest = dest;

    while (*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }

    *dest = '\0';

    printf("%d",original_dest);
    return original_dest;
}