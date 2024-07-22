#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
    unsigned char *ptr;

    ptr = s;
    if (n > 0)
    {
        while (n--)
        {
            ptr = 0;
            ptr++;
        }
    }
}