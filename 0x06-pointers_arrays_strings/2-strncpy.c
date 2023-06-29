#include "main.h"

/**
 * _strncpy - copy the string pointed to by @src,
 * into a string at the buffer pointed to by @dest
 * @dest: string to copy into 
 * @src: string to be copied
 * @n: number of byte to copy
 * Return: return pointer to @dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int src_len;

	src_len = _strlen(src);
	for (i = 0; i < n && i <= src_len; i++)
	{
		dest[i] = src[i];
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
