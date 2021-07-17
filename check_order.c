#include <stdio.h>
#include <stdlib.h>

int    input_check(char *str);
char*    input_to_str(char *str);
char*    solver(char *str);


int    input_check(char *str) // fonction pour verifier que on a bien 16 nombre entre 1 et 4
{
    int i;

    i = 0;
    while (str[i] != 0)
    {
        if (str[i] < 49 || str[i] > 52)
            return (0);
        i++;
        if (str[i] == 0 && i == 31)
            return (1);
        if (str[i] != 32)
            return (0);
        i++;
    }
    return (0);
}

char*    input_to_str(char *str) //fonction qui transforme la chaine "2 4 1 3 1 4.." en une chaine "241314.."
{
    int i;
    int j;
    char *input = malloc(32);

    i = 0;
    j = 0;
    while (str[i] != 0 && i < 15)
    {
        input[j] = str[i];
        i = i + 2;
        j++;
    }
    return (input);
}
