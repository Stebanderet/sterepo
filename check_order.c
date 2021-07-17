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

<<<<<<< HEAD
int	check_row_col(char *str)
{
	if (str[0] == 1 && str[4] == 1 || str[0] == 2 && str[4] == 4)
		if (str[0] == 3 && str[4] == 3 || str[0] == 3 && str[4] == 4
			|| str[0] == 4 && str[4] == 4)
		if (str[1] == 1 && str[5] == 1 || str[1] == 2 && str[5] == 4)
		if (str[1] == 3 && str[5] == 3 || str[1] == 3 && str[5] == 4
			|| str[1] == 4 && str[5] == 4)
		if (str[2] == 1 && str[6] == 1 || str[2] == 2 && str[6] == 4)
		if (str[2] == 3 && str[6] == 3 || str[2] == 3 && str[6] == 4
			|| str[2] == 4 && str[6] == 4)
		if (str[3] == 1 && str[7] == 1 || str[3] == 2 && str[7] == 4)			
		if (str[3] == 3 && str[7] == 3 || str[3] == 3 && str[7] == 4
			|| str[3] == 4 && str[7] == 4)
		if (str[8] == 1 && str[12] == 1 || str[8] == 2 && str[12] == 4)
		if (str[8] == 3 && str[12] == 3 || str[8] == 3 && str[12] == 4
			|| str[8] == 4 && str[12] == 4)
    	if (str[9] == 1 && str[13] == 1 || str[9] == 2 && str[13] == 4)
		if (str[9] == 3 && str[13] == 3 || str[9] == 3 && str[13] == 4
			|| str[9] == 4 && str[13] == 4)
    	if (str[10] == 1 && str[14] == 1 || str[10] == 2 && str[14] == 4)
		if (str[10] == 3 && str[14] == 3 || str[10] == 3 && str[14] == 4
			|| str[10] == 4 && str[14] == 4)
    	if (str[11] == 1 && str[15] == 1 || str[11] == 2 && str[15] == 4)
		if (str[11] == 3 && str[15] == 3 || str[11] == 3 && str[15] == 4
			|| str[11] == 4 && str[15] == 4)
		return (0);
}
=======
//int	check_colandrow(char *str)  // str[0] - str[3] =  colup
//{






//}
>>>>>>> b1ef5f4b4d1953f7ece20faebc2fb4e15758fe2c
