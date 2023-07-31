#include <stdio.h>

/**
 * main - Prints the add of the even-valued
 * fibonacci numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	long int prv = 1, nxt = 2, fib = 0, sum = 0;

	while (fib <= 4000000)
	{
		fib = prv + nxt;
		prv = nxt;
		nxt = fib;
		if ((prv % 2) == 0)
		{
			sum += prv;
		}
	}
	printf("%ld\n", afn);
	return (0);
}
