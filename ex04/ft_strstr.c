char	*ft_strstr(char *str, char *to_find)
{
        unsigned int    i;
        unsigned int    b;

        i = 0;
	b = 0;

        if (to_find[0] == '\0')
        {
                return (str);
        }

        while (str[i] != '\0')
	{
		while(str[i + b] == to_find[b])
		{
			if(to_find[b + 1] == '\0')
			{
				return(str + i);
			}
			b++;
		}
		i++;
	}
	return (0);
}
