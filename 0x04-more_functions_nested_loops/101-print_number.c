#include "main.h"

/**
 * print_number - prints an integer @n.
 * @n: input integer.
 * Return: no return.
 */
void print_number(int n)
{
	int i = n, j, count = 1;

	if (n < 0)
	{
		_putchar('-');
		i = n * -1;
	}

	j = i;

	while (j > 9)
	{
		j /= 10;
		count *= 10;
	}

	while (count >= 1)
	{
		_putchar(((i / count) % 10) + '0');
		count /= 10;
	}
}
