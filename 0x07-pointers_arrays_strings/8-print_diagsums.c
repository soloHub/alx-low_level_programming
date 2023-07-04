#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: array of integers
 * @size: size of array (square)
 */

void print_diagsums(int *a, int size)
{
	int i, sum = 0;

	for (i = 0; i < (size * size); i++)
	{
		if (i % (size + 1) == 0)
			sum += a[i];
	}
	printf("%d, ", sum);
	sum = 0;

	for (i = 0; i < (size * size); i++)
	{
		if (i % (size - 1) == 0 && i != (size * size - 1) && i != 0)
			sum += a[i];
	}
	printf("%d\n", sum);
}
