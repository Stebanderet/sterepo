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
