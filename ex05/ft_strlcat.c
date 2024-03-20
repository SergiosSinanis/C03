unsigned int    ft_strlen(char *str)
{
    unsigned int    i;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

unsigned int    ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int    i;
    unsigned int    dest_length;

    i = 0;

    dest_length = ft_strlen(dest);

    if (size <= dest_length)
    {
        return (ft_strlen(src) + size);
    }

    while (src[i] && (dest_length + i) < (size - 1))
    {
        dest[dest_length + i] = src[i];
        i++;
    }
    dest[dest_length + i] = '\0';
    return (dest_length + ft_strlen(src));
}