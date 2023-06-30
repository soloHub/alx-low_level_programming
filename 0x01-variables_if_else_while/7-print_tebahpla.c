#include <stdio.h>

/**
 * main - print all lower case alphabet in reverse
 * Return: 0 (Success)
 */

int main(void)
{
	char a = 'z';
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(a - i);
	}
	putchar('\n');
	return (0);
}
