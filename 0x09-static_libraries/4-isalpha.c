#include "main.h"

/**
 * _isalpha - checks for alphabetic character.
 * @c: integer of character
 * Return: 1 (Success) or 0 (failure)
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
