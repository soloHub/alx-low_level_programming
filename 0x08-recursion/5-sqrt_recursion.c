#include "main.h"

/**
 * _sqrt_recursion - prints natural square root of @n
 * @n: number to find square root
 * Return: -1 if @n does not have natural roots or @n^0.5
 */
int _sqrt_rec(int n, int i, int j);

int _sqrt_recursion(int n){
    int i = 1;
	int j = 0;
    return (_sqrt_rec(n, i, j));
}

int _sqrt_rec(int n, int i, int j)
{
	if(n == 0)
		return (j);
	else if (n < 0)
		return (-1);
	n = n - i;
	j++;
	i = i + 2;
    return (_sqrt_rec(n, i, j));
}
