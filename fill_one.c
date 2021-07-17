
#include <stdlib.h>
#include <stdio.h>

char	*fill_one_col(char *str, char *rules);
char	*fill_one_row(char *str, char *rules);

char	*fill_one(char *str, char *rules)
{
	str = fill_one_col(str, rules);
	str = fill_one_row(str, rules);

	return (str);
}

char    *fill_one_col(char *str, char *rules)
{
	int    i;
	int	j;

	j = 0;
	i = 0;
    while (i < 4)
    {
        if (rules[i] == '1')
            str[i * 2] = '4';
        i++;
     }
	j = 24;

     while (i < 8)
     {
        if (rules[i] == '1')
            str[j] = '4';
        i++;
        j = j + 2;
     }
    return (str);
}

char    *fill_one_row(char *str, char *rules)
{
	int    i;
	int	j;

	j = 0;
	i = 8;
    while (i < 12)
    {
        if (rules[i] == '1')
            str[j] = '4';
        i++;
        j = j + 8;
     }
	j = 6;

     while (i < 16)
     {
        if (rules[i] == '1')
            str[j] = '4';
        i++;
        j = j + 8;
     }
    return (str);
}



