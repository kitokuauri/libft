#include "libft.h"

char    *ft_strdup(char *src)
{
    int i;
    char    *dup;

    i = 0;
    while (src[i])
        i++;
    dup = malloc(i + 1 * sizeof(char));
    if (dup)
    {
        i = 0;
        while (src[i])
        {
            dup = src[i];
            i++;
        }
        dup = '\n';
    }
    return (dup);
}