#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - print all lower case alphabet
 */

void print_alphabet(void)
{
	char a = 'a';
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar(a + i);
	}
	_putchar('\n');
}
