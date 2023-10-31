#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns pointer to newly allocated space in memory
 * with copy of @str
 * @str: string to copy
 * Return: pointer to array or NULL
 */

char *_strdup(char *str)
{
	char *cp;
	int i, j;

	if (str == NULL)
		return (NULL);
	
	for(i = 0; str[i] != '\0'; i++);

	cp = malloc((i + 1) * sizeof(char));

	if (cp == NULL)
		return (NULL);
	
	for (j = 0; j <= i; j++)
	{
		cp[j] = str[j];
	}
	return (cp);
}
