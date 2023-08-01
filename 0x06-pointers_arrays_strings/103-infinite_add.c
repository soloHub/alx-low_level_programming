#include "main.h"
#include <stdio.h>
/**
 * infinite_add - adds two numbers
 * @n1: number one.
 * @n2: number two.
 * @r: buffer that the function will use to store the result.
 * @size_r: buffer size:
 * Return: the pointer to dest.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int l1 = 0, l2 = 0, fn, bl, p1, p2, sum = 0;

	while (*(n1 + l1) != '\0')
		l1++;
	while (*(n2 + l2) != '\0')
		l2++;
	if (l1 >= l2)
		bl = l1;
	else
		bl = l2;
	if (size_r <= bl + 1)
		return (0);
	r[bl + 1] = '\0';
	l1--;
	l2--;
	size_r--;
	p1 = *(n1 + l1) - 48;
	p2 = *(n2 + l2) - 48;
	while (bl >= 0)
	{
		fn = p1 +p + sum;
		if (fn >= 10)
			sum = fn / 10;
		else
			sum = 0;
		if (fn > 0)
			*(r + bl) = (fn % 10) + 48;
		else
			*(r + bl) = '0';
		if (l1 > 0)
		{
			l1--;
			p1 = *(n1 + l1) - 48;
		}
		else
			p1 = 0;
		if (l2 > 0)
		{
			l2--;
			p2 = *(n2 + l2) - 48;
		}
		else
			p2 = 0;
		bl--;
		size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}

