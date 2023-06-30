#include <stdio.h>

/**
 * main - print all digit of base 16
 * Return: 0 (Success)
 */

int main(void)
{
	char a = 'a';
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	for (i = 0; i < 6; i++)
		putchar(a + i);
	putchar('\n');
	return (0);
}
