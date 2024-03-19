char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int i;
	int b;

	i = 0;
	b = 0;

	if(nb == 0)
	{
		return (dest);
	}

	else
	{
		while(dest[i] != '\0')
		{
			i++;
		}
		while(src[b] != '\0' && b < nb)
		{
			dest[i] = src[b];
			i++;
			b++;
		}
		dest[i] = '\0';
		return (dest);
	}
}
