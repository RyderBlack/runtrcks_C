#include "job05.h"
#include <unistd.h>

static void ft_putchar(char c)
{
    write(1, &c, 1);
}

static void ft_putnbr(unsigned long long n)
{
    if (n >= 10)
        ft_putnbr(n / 10);
    ft_putchar((n % 10) + '0');
}

static int str_to_int(char *s)
{
    int sign = 1;
    int num = 0;
    while (*s == ' ' || (*s >= 9 && *s <= 13))
        s++;
    if (*s == '-' || *s == '+')
    {
        if (*s == '-')
            sign = -1;
        s++;
    }
    while (*s >= '0' && *s <= '9')
    {
        num = num * 10 + (*s - '0');
        s++;
    }
    return (sign * num);
}

unsigned long long get_factorial(char *s)
{
    int n = str_to_int(s);
    unsigned long long res = 1;
    int i = 1;
    if (n < 0)
        return (0);
    while (i <= n)
    {
        res = res * i;
        i++;
    }
    return (res);
}

void print_factorial(char *s)
{
    unsigned long long fact = get_factorial(s);
    ft_putnbr(fact);
    ft_putchar('\n');
}