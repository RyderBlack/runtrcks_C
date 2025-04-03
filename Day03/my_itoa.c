#include <stdlib.h>
#include "my_itoa.h"

static int      count_digits(long n)
{
    int     c;

    c = 0;
    if (n == 0)
        return (1);
    while (n)
    {
        n /= 10;
        c++;
    }
    return (c);
}

char    *my_itoa(int n)
{
    long    nb;
    int             sign;
    int             digits;
    int             len;
    char    *str;

    nb = n;
    sign = 0;
    if (nb < 0)
    {
        sign = 1;
        nb = -nb;
    }
    digits = count_digits(nb);
    len = digits + sign;
    str = malloc(sizeof(char) * (len + 1));
    if (!str)
        return (0);
    str[len] = '\0';
    if (nb == 0)
        str[0] = '0';
    while (digits > 0)
    {
        str[--len] = (nb % 10) + '0';
        nb /= 10;
        digits--;
    }
    if (sign)
        str[0] = '-';
    return (str);
}