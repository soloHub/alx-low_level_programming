#include "main.h"

/**
 * leet -ncodes a string into 1337 or leet
 * @s: pointer to string
 * Return: pointer to string
 */

char *leet(char *s)
{
	int i = 0, j;

	char deCode[] = {'a', 'e', 'o', 't', 'l'};
	char enCode[] = {'4', '3', '0', '7', '1'};

	while (s[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == deCode[j] || s[i] == (deCode[j] - 32))
				s[i] = enCode[j];
		}
		i++;
	}
	return (s);
}
