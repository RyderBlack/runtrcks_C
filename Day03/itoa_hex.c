#include <stdlib.h>
#include "itoa_hex.h"

char *itoa_hex(int n)
{
    char *hex = "0123456789ABCDEF";
    char *str;
    long num = n;
    int neg = 0;
    int len = 0;
    long tmp;

    if (num < 0)
    {
        neg = 1;
        num = -num;
    }
    tmp = num;
    if (tmp == 0)
        len = 1;
    while (tmp > 0)
    {
        tmp /= 16;
        len++;
    }
    str = malloc(sizeof(char) * (len + neg + 1));
    if (!str)
        return (0);
    str[len + neg] = '\0';
    if (num == 0)
        str[neg] = '0';
    while (num > 0)
    {
        str[--len + neg] = hex[num % 16];
        num /= 16;
    }
    if (neg)
        str[0] = '-';
    return (str);
}