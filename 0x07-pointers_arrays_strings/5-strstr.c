#include "main.h"

/**
 * _strstr - finds the first occurrence of the
 * substring @needle in the string @haystack
 * @haystack: string to go through
 * @needle: substring to check
 * Return: returns pointer to location of substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, k;

	for (i = 0; needle[i] != '\0'; i++)
	{}

	for (j = 0; haystack[j] != '\0'; j++)
	{
		for (k = 0; k < i; k++)
			if (haystack[j + k] != needle[k])
				break;
		if (k == i)
			return (haystack + j);
	}
	return ('\0');
}
