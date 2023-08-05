#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	int x, num, total = 0;
	char *f;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (x = 1; argv[x]; x++)
	{
		num = strtol(argv[x], &f, 10);
		if (*f)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			total += num;
		}
	}
	printf("%d\n", total);

	return (0);
}
