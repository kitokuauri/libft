#include "libft.h"

int ft_isalnum(int c)
{
    if (c >= 48 && c <= 122)
    {
        if (!(c >= 58 && c <= 64) && !(c >=91 && c <= 96))
            return (1);
        return (0);
    }
    return (0);
}