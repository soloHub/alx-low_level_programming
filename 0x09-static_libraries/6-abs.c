#include "main.h"

/**
 * _abs - print absolute number of @a
 * @a: number
 * Return: |a|
 */

int _abs(int a)
{
	if (a < 0)
		a = a * -1;
	return (a);
}
