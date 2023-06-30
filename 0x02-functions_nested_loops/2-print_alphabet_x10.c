#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 */

void print_alphabet_x10(void)
{
	char a = 'a';
	int i, j = 0;

	while (j < 10)
	{
		for (i = 0; i < 26; i++)
		{
			_putchar(a + i);
		}
		_putchar('\n');
		j++;
	}
}
