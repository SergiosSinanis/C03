int     ft_strncmp(char *s1, char *s2, unsigned int n)
{
        int i;

        i = 0;
        if(n == 0)
          return (0);
        while(s1[i] && s1[i] == s2[i] && i < n)
                i++;
        return (s1[i] - s2[i]);
}
