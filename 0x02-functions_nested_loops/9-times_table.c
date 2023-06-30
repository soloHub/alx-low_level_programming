#include "main.h"

/**
 * times_table - prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j == 0)
				_putchar(i * j % 10 + '0');
			else if (j != 0 && i * j / 10 == 0)
			{
				_putchar(' ');
				_putchar(i * j % 10 + '0');
			}
			else if (j != 0 && i * j / 10 != 0)
			{
				_putchar(i * j / 10 + '0');
				_putchar(i * j % 10 + '0');
			}

			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
				_putchar('\n');
		}
	}
}
