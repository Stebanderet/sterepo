#include <stdio.h>
#include <stdlib.h>

int	input_check(char *str);
char*	input_to_str(char *str);
char*	solver(char *str);

int  main(int argc, char **argv)  // **argv  contient les arguments du programme ( le "1 1 1".." apres le a./out )
{
	int	i;
	argc = 0;
	i = 1;
	while (argv[i] != 0)  // argv[0] -> on s'en fiche | argv[1] contient le premier truc qu'on ecrit apres le ./a.out
		i++;
	if (i != 2)	// du coup la on verifie que il y a que 1 truc ecrit apres le ./a.out ( la chaine de 1 3 2 4 2 3....)
	{
		printf("Error\n"); // si il y a 0 arguments, ou plus d'un arguments, on dit ERREUR
		return (0);
	}
	if (input_check(argv[1]) == 1) 	// on donne la chaine de  "1 3 2 4..." a la fonction input_check ( ecrite plus bas ) pour verifier que il y a que 16 nombres entre 1 et 4
	{
	 solver(input_to_str(argv[1])); // la on donne la chaine de "142313..." a la fonction solver ( dans le fichier solver.c )  pour resoudre le carre

	}
	else
		printf("Error\n");
	return (0);
}
