#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Prints a buffer 10 bytes at a time, starting with
 *                the byte position, then showing the hex content,
 *                then displaying printable charcaters.
 * @b: The buffer to be printed.
 * @size: The number of bytes to be printed from the buffer.
 */
void print_buffer(char *b, int size)
{
	int bs, i;

	for (bs = 0; bs < size; bs += 10)
	{
		printf("%08x: ", bs);

		for (i = 0; i < 10; i++)
		{
			if ((i + bs) >= size)
				printf("  ");

			else
				printf("%02x", *(b + i + bs));

			if ((i % 2) != 0 && i != 0)
				printf(" ");
		}

		for (i = 0; i < 10; i++)
		{
			if ((i + bs) >= size)
				break;

			else if (*(b + i + bs) >= 31 &&
				 *(b + i + bs) <= 126)
				printf("%c", *(b + i + bs));

			else
				printf(".");
		}

		if (bs >= size)
			continue;

		printf("\n");
	}

	if (size <= 0)
		printf("\n");
}

