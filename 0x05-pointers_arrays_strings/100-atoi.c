#include "main.h"
#include<ctype.h>

/**
 * _atoi - convert a string to an integer
 * @s: string to be converted
 * Return: integer
 */

int _atoi(char *s)
{
	int i;
	int sign = 1;
	int result = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
		{
			continue;
		}
		else if (s[i] == '-')
		{
			sign = sign * -1;
		}
		else if (isdigit(s[i]))
		{
			result = (result * 10) + (s[i] - '0');
		}
		else if (result != 0)
		{
			break;
		}
	}
	return (result * sign);
}
