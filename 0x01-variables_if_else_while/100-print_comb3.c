#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int i, m;

	for (i = 48; i < 57; i++)
	{
		for (m = 49; m < 58; m++)
		{
			if (m > i)
			{
				putchar(i);
				putchar(m);
				if (i != 56 || m != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
