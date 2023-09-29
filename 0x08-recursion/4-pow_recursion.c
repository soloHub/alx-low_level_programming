#include "main.h"

/**
 * _pow_recursion - prints value of @x raised to the power of @y
 * @x: number
 * @y: number
 * Return: -1 if @y is < 0 or @x^@y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	else
		return (x * _pow_recursion(x, y - 1));
}

