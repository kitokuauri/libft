#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
    size_t i;
    unsigned char *ptr;

    i = 0;
    ptr = b;
    while (i < len)
    {
        ptr[i] = (unsigned char)c;
        i++;
    }
    return (b);
}