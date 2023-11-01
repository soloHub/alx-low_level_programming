#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argument count.
 * @av: argument vector.
 * Return: pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *conArg;
	int len, i, j, k;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (len = 0, i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++;
	}

	conArg = malloc((len + 1) * sizeof(char));

	if (conArg == NULL)
	{
		free(conArg);
		return (NULL);
	}

	for (k = 0, i = 0; i < ac; i++, k++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
		{
			conArg[k] = av[i][j];
		}
		conArg[k] = '\n';
	}

	return (conArg);
}
