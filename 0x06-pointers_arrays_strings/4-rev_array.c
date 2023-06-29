#include "main.h"

/**
 * reverse_array - everses the content of an array of integers
 * @a: pointer to array
 * @n: number of elements in array
 */

void reverse_array(int *a, int n)
{
	int i, j, tmp;

	for (i = 0, j = n - 1; i < (n / 2); i++, j--)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}
}
