#include "main.h"

/**
 * factorial - prints factorial of a given @n
 * @n: number
 * Return: 1 if @n is 0, -1 if @n is < 0 and factorial of @n
 *
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
