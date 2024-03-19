char  *ft_strcat(char *dest, char *src)
{
	int i;
	int b;

	i = 0;
	b = 0;
	while(dest[i])
	{
		i++;
	}
	while(src[b])
	{
		dest[i] = src[b];
		i++;
		b++;
	 }
	dest[i] = '\0'
	return (dest);
}
