#include "main.h"
#include <stdlib.h>
/**
 * strtow - splits a string @str into exp
 * Return: pointer to an array of strings (exp) or null
 */
char **strtow(char *str)
{
	int i, j, k, total = 0, l, m, len;
	char **exp;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			total++;
	if (total == 0)
		return (NULL);
	exp = malloc((total + 1) * sizeof(char *));
	if (exp == NULL)
		free(exp); return (NULL);
	for (i = 0; str[i] != '\0' &&  k < total; i++)
		if (str[i] != ' ')
		{
			len = 0;
			for (j = i; str[j] != ' ' && str[j] != '\0'; j++)
				len++;
			exp[k] = malloc((len + 1) * sizeof(char));
			if (exp[k] == NULL)
			{
				for (m = 0; m < k; m++)
					free(exp[k]);
				free(exp); return (NULL);
			}
			for (l = 0; l < len; l++, i++)
				exp[k][l] = str[i];
			exp[k][l] = '\0', k++;
		}
	exp[k] = NULL; return (exp);
}
