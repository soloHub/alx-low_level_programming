#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to
 * a 2 dimensional array of integers
 * @width: width of array.
 * @height: height of array.
 * Return: point to the array or NULL if it fails.
 */
int **alloc_grid(int width, int height)
{
	int **arr, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc((height) * sizeof(int *));

	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}


	for (i = 0; i < height; i++)
	{
		arr[i] = malloc((width) * sizeof(int));
		if (arr[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(arr[j]);
			}
			free(arr);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}

	return (arr);
}
