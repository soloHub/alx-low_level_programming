#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the min number of coins to make change
 * for an amount of money
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	char *x;
	unsigned int i;
	int count, val;
	int cents[] = {25, 10, 5, 2};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	val = strtol(argv[1], &x, 10);
	count = 0;

	if (!*x)
	{
		while (val > 1)
		{
			i = 0;
			while (i < sizeof(cents[i]))
			{
				if (val >= cents[i])
				{
					count += val / cents[i];
					val = val % cents[i];
				}
				i++;
			}
		}
		if (val == 1)
			count++;
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", count);
	return (0);
}
