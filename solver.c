#include <stdio.h>
#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src);
char	*fill_four(char *str, char *rules);
char	*fill_one(char *str, char *rules);
char*	solver(char *str)
{
	char *s = 0;
	s = (char*)malloc(320);
	ft_strcpy(s, "0 0 0 0\n0 0 0 0\n0 0 0 0\n0 0 0 0\n");
	s = fill_four(s, str);
	s = fill_one(s, str);






	return (s);
}

int	check_safe_row(char *s)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < 5)
	{
		if ((s[i] == s[i + 2]) || (s[i] == s[i + 4])
			return (0);
		if ((s[i + 2] == s[i + 4]) || (s[i + 2] == s[i + 6]))
			return (0);
		if ((s[i + 4] == s[i + 6]) || (s[i] == s[i +6]))
			return (0);
		j++;
		i = i + 8;
	}
}

int	check_safe_col(char *s)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < 5)
	{
		if ((s[i] == s[i + 8]) || (s[i] == s[i + 16])
			return (0);
		if ((s[i + 8] == s[i + 16]) || (s[i + 8] == s[i + 24]))
			return (0);
		if ((s[i + 16] == s[i + 24]) || (s[i] == s[i + 24]))
			return (0);
		j++;
		i = i + 2;
	}

char    *ft_strcpy(char *dest, char *src)
{
    int    i;

    i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    i++;
    dest[i] = src[i];
    return (dest);
}
