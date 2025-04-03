#include "fibonacci.h"
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

static int ft_atoi(char *s)
{
    int sign = 1;
    int num = 0;
    while (*s == ' ' || (*s >= 9 && *s <= 13))
        s++;
    if (*s == '+' || *s == '-')
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
    return (num * sign);
}

static unsigned long long fibonacci(int n)
{
    unsigned long long a = 0;
    unsigned long long b = 1;
    unsigned long long tmp;
    int i = 0;
    if (n < 0)
        return (0);
    if (n == 0)
        return (0);
    if (n == 1)
        return (1);
    while (i < n - 1)
    {
        tmp = a + b;
        a = b;
        b = tmp;
        i++;
    }
    return (b);
}

void print_fibonacci(char *s)
{
    int n = ft_atoi(s);
    unsigned long long fib;
    fib = fibonacci(n);
    ft_putnbr(fib);
    ft_putchar('\n');
}

