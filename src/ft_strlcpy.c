unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int    i;
    unsigned int    len;

    i = 0;
    len = 0;
    if (size < 1)
        return (0);
    while (src[len])
        len++;
    while (src[i] && i < size - 1)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (len);
}