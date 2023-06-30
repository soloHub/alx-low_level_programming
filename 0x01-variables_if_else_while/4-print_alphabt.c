#include <stdio.h>

/**
 * main - print all lower case alphabet
 * except q and e
 * Return: 0 (Success)
 */

int main(void)
{
	char a = 'a';
	int i;

	for (i = 0; i < 26; i++)
	{
		if ((a + i) != 'e' && (a + i) != 'q')
			putchar(a + i);
	}
	putchar('\n');
	return (0);
}
