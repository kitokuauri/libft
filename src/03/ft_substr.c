#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *substr;
    unsigned int    i;
    size_t  j;

    i = 0;
    while (s[i] < start)
        i++;
    if (substr = malloc(i + 1 * sizeof(char)))
    {
        j = 0;
        while (j < len && s[i])
        {
            substr[j] = s[i];
            j++;
            i++;
        }
        return (substr);
    }
    else
        return (NULL);
}