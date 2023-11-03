#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - concatenates @n bytes
 * of a string @s1 to another string @s2
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int len_s1, len_s2, len_str, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (len_s1 = 0; s1[len_s1] != '\0'; len_s1++)
		;

	for (len_s2 = 0; s2[len_s2] != '\0'; len_s2++)
		;

	if (n >= len_s2)
		n = len_s2;

	len_str = len_s1 + n;
	str = malloc(len_str + 1);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < len_str; i++)
		if (i < ls1)
			str[i] = s1[i];
		else
			str[i] = s2[i - len_s1];

	str[i] = '\0';

	return (str);
}
