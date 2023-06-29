#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: pointer to string
 * Return: pointer to string
 */

char *cap_string(char *s)
{
	int i;

	if (isLower(s[0]))
	{
		s[0] = s[0] - 32;
	}

	for (i = 0; s[i] != '\0'; i++)
	{
		if (isSeperator(s[i]) && s[i + 1] != '\0')
		{
			if (isLower(s[i + 1]))
			{
				s[i + 1] = s[i + 1] - 32;
			}
		}
	}
	return s;
}

/**
 * isSeperator - check for word seperators
 * @a: char to check
 * Return: 1 for true and 0 for false
 */

int isSeperator(char a)
{
	if (a == ',' || a == ';' || a == '.' || a == '!')
	{
		return (1);
	}
	else if (a == '?' || a == '"' || a == '(' || a == ')')
	{
		return (1);
	}
	else if (a == '{' || a == '}' || a == ' ' || a == '\t' || a == '\n')
	{
		return (1);
	}
	return (0);
}

/**
 * isLower - check for lower case
 * @a: char to check
 * Return: 1 for true and 0 for false
 */

int isLower(char a)
{
	if (a >= 'a' && a <= 'z')
	{
		return (1);
	}
	return (0);
}
