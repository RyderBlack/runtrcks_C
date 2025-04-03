#include "my_atoi.h"

int my_atoi(char *str)
{
    int sign = 1;
    int result = 0;
    while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\v' || *str == '\f' || *str == '\r')
        str++;
    if (*str == '-' || *str == '+')
    {
        if (*str == '-')
            sign = -1;
        str++;
    }
    while (*str && (*str >= '0' && *str <= '9'))
    {
        result = result * 10 + (*str - '0');
        str++;
    }
    return sign * result;
}