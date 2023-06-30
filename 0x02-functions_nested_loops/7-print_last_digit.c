#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @a: number
 * Return: last digit
 */

int print_last_digit(int a)
{
	int lst_dgt;

	lst_dgt = a % 10;
	if (lst_dgt < 0)
		lst_dgt = lst_dgt * -1;
	_putchar(lst_dgt + '0');
	return (lst_dgt);
}
