#include <stdio.h>
/**
 * main - prints largest prime factor.
 *
 * Return: returns 0
 */
int main(void)
{
	long int pf = 2;
	long int num = 612852475143;

	while (pf != num)
	{
		if (num % pf == 0)
		{
			num = num / pf;
		} else
		{
			pf++;
		}
	}
	printf("%lu\n", num);
	return (0);
}
