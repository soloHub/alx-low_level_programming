#include "main.h"

/**
 * _islower - checks for lowercase character.
 * @c: integer of character
 * Return: 1 (Success) or 0 (failure)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
