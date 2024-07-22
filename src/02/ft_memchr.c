#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;

    i = 0;
    while (i <= n)
    {
        if (s == (unsigned char)c)
            return (s);
        s++;
    }
    return ('\0');
}