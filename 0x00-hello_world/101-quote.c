#include<stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Description: prints to strerr
 *
 * Return: 1 (Success)
 */
int main(void)
{
	char c[70] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(c, 70, 1, stderr);
	return (1);
}
