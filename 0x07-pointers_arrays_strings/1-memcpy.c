#include "main.h"

/**
 * _memcpy - Copies n bytes of the memory area
 * pointed to by @src to the memory area pointer @dest.
 * @dest: A pointer to the memory area to copy @src into.
 * @src: The source to copy from.
 * @n: The number of bytes to be copied from @src.
 *
 * Return: A pointer to the memory area @dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
