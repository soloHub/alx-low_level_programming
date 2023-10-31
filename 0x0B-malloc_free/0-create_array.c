#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char @c
 * @size: size of memory for array.
 * @c: char to initialize array.
 * Return: point to the array or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	char *cArr;
	int i;

	if (size == 0)
		return (NULL);

	cArr = malloc(size * sizeof(char));

	if (cArr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		cArr[i] = c;
	}

	return (cArr);
}
