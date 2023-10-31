#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to new string or NULL
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, m, n;
	char *con_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	con_str = malloc((i + j + 1) * sizeof(char));

	if (con_str == NULL)
		return (NULL);

	for (m = 0; m < i; m++)
	{
		con_str[m] = s1[m];
	}
	for (n = 0; n <= j; n++)
	{
		con_str[n + m] = s2[n];
	}

	return (con_str);
}
