unsigned int ft_strlcpy(char * restrict dest, char * restrict src, size_t dstsize)
{
    size_t    i;
    size_t    len;

    i = 0;
    len = 0;
    if (dstsize < 1 || !dest || !src)
        return (0);
    while (src[len])
        len++;
    while (src[i] && i < dstsize - 1)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (len);
}