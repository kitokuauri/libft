#include "libft.h"

static int  ft_charset(char c, char const *set)
{
    size_t  i;

    i = 0;
    while (set[i])
    {
        if (c == set[i])
            return (1);
        i++;
    }
    return (0);
}

char    *ft_strtrim(char const *s1, char const *set)
{
    size_t  i;
    char    *trim;

    if (s1 && set)
    {
        i = 0;
        trim = malloc(ft_strlen(s1) * sizeof(char));
        while (s1[i])
        {
            if (!ft_charset(s1[i], set))
                trim = s1[i];
            i++;
        }
        while (i >= 0)
        {
            if (!ft_charset(s1[i], set))
                trim = s1[i];
            i--;
        }
        trim = '\0';
        return (trim);
    }
    return (NULL);
}