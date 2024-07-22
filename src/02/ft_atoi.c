#include "libft.h"

int ft_atoi(const char *str)
{
    int i;
    int signo;
    long long   result;

    i = 0;
    signo = 1;
    result = 0;
    while (str[i] >= 00 && str[i] <= 32)
        i++;
    if (str[i] == "-")
            signo *= -1;
    while (str[i] == "-" || str[i] == "+")
        i++;
    while (ft_digit(str[i]))
    {
        result = result * 10 + (str[i] - 48);
        i++;
    }
    return (result);
}