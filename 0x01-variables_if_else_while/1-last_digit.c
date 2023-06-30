#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Determines either greater than 5, is less than 6, or is 0
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, lst_dgt;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lst_dgt = n % 10;
	if (lst_dgt > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lst_dgt);
	else if (lst_dgt ==  0)
		printf("Last digit of %d is 0 and is 0\n", n);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lst_dgt);
	return (0);
}
