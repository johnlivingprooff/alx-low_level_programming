#include "main.h"

/**
* argstostr - function that concatenates
* all the arguments of your program.
* @ac: number of available arguments
* @av: arguments to be cat 👍
* Return: pointer to cat arguments
*/
char *argstostr(int ac, char **av)
{
	int i, j, tlen = 0;
	char *acat, *cat;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		tlen += strlen(av[i]);
	

	acat = malloc((ac + tlen + 1) * sizeof(char));
	if (acat == NULL)
		return (NULL);

	cat = acat;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, cat++)
		{
			*cat = av[i][j];
		}
		*cat = '\n';
		cat++;
	}

	*cat = '\0';
	return (acat);
}
