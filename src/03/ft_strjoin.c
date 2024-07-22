#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char    *s3;
    int i;
    int j;

    if (s3 = malloc(ft_strlen(s1) + ft_strlen(s2) + 1 * sizeof(char)))
    {
        j = 0;
        while (i < ft_strlen(s1))
        {
            i = 0;
            s3[i] = s1[i];
            i++;
        }
        while (j < ft_strlen(s2))
        {
            j = 0;
            s3[i] = s2[j];
            i++;
            j++;
        }
        return (s3);
    }
    else
        return (NULL);
}