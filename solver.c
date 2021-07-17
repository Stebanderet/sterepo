#include <stdio.h>
#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src);
char	*fill_four(char *str, char *rules);

char*	solver(char *str)
{
	char *s = 0;
	s = (char*)malloc(320);
	ft_strcpy(s, "0 0 0 0\n0 0 0 0\n0 0 0 0\n0 0 0 0\n");
	s = fill_four(s, str);

	return (s);
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
