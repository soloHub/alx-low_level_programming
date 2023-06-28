#include "main.h"

/**
* rev_string - reverses a string
* @s: string to reverse
*/

void rev_string(char *s)
{
	int i;
	char tmp;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
	}

	j = 0;
	i--;

	while (i > j)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		i--;
		j++;
	}

}
