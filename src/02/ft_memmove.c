#include "libft.h"

void    *ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char *d;
    const unsigned char *s;

    d = dst;
    s = src;
    if (dst < src)
    {
        while (len--)
            *d++ = *s++;
    }
    else
    {
        d += len;
        s += len;
        *--d = *--s;
    }
    return (dst);
}