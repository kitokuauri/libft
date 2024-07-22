#include "libft.h"

void    *ft_calloc(size_t count, size_t size)
{
    void    *buffer;

    if (!(buffer = (void *)malloc(size * count)))
        return ('\0');
    ft_bzero(buffer, size * count);
    return (buffer);
}