#include <stdio.h>

/**
 * main - Prints the add of the Fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	long int prv, nxt, fib;

	prv = 1;
	nxt = 2;
	printf("%ld, %ld", prv, nxt);
	for (i = 0; i < 48; i++)
	{
		fib = prv + nxt;
		printf(", %ld", fib);
		prv = nxt;
		nxt = fib;
	}
	printf("\n");
	return (0);
}
