#include <unistd.h>

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

char*    input_to_str(char *str) //fonction qui transforme la chaine "2 4 1 3 1 4.." en une chaine "241314.."
{
    int i;
    int j;
    char *input = malloc(32);

    i = 0;
    j = 0;
    while (str[i] != 0 && i < 32)
    {
        input[j] = str[i];
        i = i + 2;
        j++;
    }
    return (input);
}
