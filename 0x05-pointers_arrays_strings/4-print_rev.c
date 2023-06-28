#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string to reverse
 */

void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{

	}

	while (i > -1)
	{
		_putchar(s[i]);
		i--;
	}

	_putchar('\n');
}
