#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	int index = 2;

	float a = 1;
	float b = a + 1;
	float c;

	printf("%.0f, %.0f, ", a, b);

	while (index < 98)
	{
		c = a + b;
		printf("%.0f", c);
		a = b;
		b = c;
		if (index < 98)
		{
			printf(", ");
		}
		index++;
	}
	printf("\n");
	return (0);
}
