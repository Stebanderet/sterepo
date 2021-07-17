#include <stdio.h>
#include <stdlib.h>
int	input_check(char *str);
char*	input_to_str(char *str);

int  main(int argc, char **argv)
{
	int	i;
	argc = 0;
	i = 1;
	while (argv[i] != 0)
		i++;
	if (i != 2)
	{
		printf("Error\n");
		return (0);
	}
	if (input_check(argv[1]) == 1)
	{
		printf("%s\n", input_to_str(argv[1]));

	}
	else
		printf("Error\n");
	return (0);
}




int	input_check(char *str)
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

char*	input_to_str(char *str)
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
	printf("%s\n", input);
	return (input);
}

