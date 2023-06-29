#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: string to print
 */

void puts_half(char *str)
{
	int i;
	int init;

	if (_strlen(str) % 2 == 1)
	{
		init = (_strlen(str) - 1) / 2;
	}
	else
	{
		init = _strlen(str) / 2;
	}

	for (i = init; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

/**
* _strlen - returns the length of a string
* @s: string
* Return: length
*/

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{}
	return (i);
}
