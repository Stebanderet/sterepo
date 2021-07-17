#include <stdlib.h>

char	*fill_four_col_up(char *str, char *rules)
char	*fill_four_col_down(char *str, char *rules)
char	*fill_four_row_left(char *str, char *rules)
char	*fill_four_row_right(char *str, char *rules)

char    *fill_four(char *str, char *rules)
{
    int    i;
    int    j;

    i = 0;
    j = 0;

    while (i < 4)
    {
        if (rules[i] == '4')
        {
            str[j] = '1';
            str[j + 8] = '2';
            str[j + 16] = '3';
            str[j + 24] = '4';
        }
        i++;
        j = j + 2;
    }
    return (str);
}

char    *fill_four_col_up(char *str, char *rules)
{
    int    i;
    int    j;

    i = 0;
    j = 0;

    while (i < 4)
    {
        if (rules[i] == '4')
        {
            str[j] = '1';
            str[j + 8] = '2';
            str[j + 16] = '3';
            str[j + 24] = '4';
        }
        i++;
        j = j + 2;
    }
    return (str);

char    *fill_four_col_down(char *str, char *rules)
{
    int    i;
    int    j;

    i = 4;
    j = 24;

    while (i < 8)
    {
        if (rules[i] == '4')
        {
            str[j] = '1';
            str[j - 8] = '2';
            str[j - 16] = '3';
            str[j - 24] = '4';
        }
        i++;
        j = j + 2;
    }
    return (str);

char    *fill_four_row_left(char *str, char *rules)
{
    int    i;
    int    j;

    i = 8;
    j = 0;

    while (i < 12)
    {
        if (rules[i] == '4')
        {
            str[j] = '1';
            str[j + 2] = '2';
            str[j + 4] = '3';
            str[j + 6] = '4';
        }
        i++;
        j = j + 8;
    }
    return (str);

char    *fill_four(char *str, char *rules)
{
    int    i;
    int    j;

    i = 0;
    j = 0;

    while (i < 4)
    {
        if (rules[i] == '4')
        {
            str[j] = '1';
            str[j + 8] = '2';
            str[j + 16] = '3';
            str[j + 24] = '4';
        }
        i++;
        j = j + 2;
    }
    return (str);
