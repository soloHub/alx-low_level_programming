#include "main.h"

/**
 * _strncat - Concatenates the string pointed to at most n bytes from @src,
 * @src does not need to be null-terminated if it contains n or more bytes
 * to the end of the string pointed to by @dest.
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 * @n: number of bytes to append
 * Return: A pointer to the destination string @dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len;
	int src_len;
	int i;

	dest_len = _strlen(dest);
	src_len = _strlen(src);

	if (n > src_len)
		n = src_len;

	for (i = 0; i < n; i++)
	{
		dest[dest_len + i] = src[i];
	}
	return (dest);
}

/**
* _strlen - returns the length of a string
* @s: string
* Return: length
*/

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{}

	return (i);
}
