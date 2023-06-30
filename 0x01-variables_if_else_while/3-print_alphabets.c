#include <stdio.h>

/**
 * main - print all lower case and upper case alphabet
 * Return: 0 (Success)
 */

int main(void)
{
	char a = 'a';
	char _a = 'A';
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(a + i);
	}
	for (i = 0; i < 26; i++)
		putchar(_a + i);
	putchar('\n');
	return (0);
}
