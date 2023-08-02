#include "main.h"

int is_prime(int n, int i);

/**
 * is_prime_number - check @n is prime number
 * @n: number to check
 * Return: 1 if the @n is a prime number, otherwise return 0
 */

int is_prime_number(int n)
{
	int i = 2;

	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (is_prime(n, i));
}

/**
 * is_prime - check @n is prime number
 * @n: number to check
 * @i: number to divide @n
 * Return: 1 if the @n is a prime number, otherwise return 0
 */

int is_prime(int n, int i)
{
	if (n == i)
		return (1);
	else if (n % i == 0)
		return (0);
	else
		return (is_prime(n, i + 1));
}
