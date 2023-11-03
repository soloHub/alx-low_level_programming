#include "main.h"
#include <stdlib.h>

int main(int argc, char *argv[])
{
	if (argc != 3)
		exit_error();

	char *num1 = argv[1];
	char *num2 = argv[2];

	for (int i = 0; num1[i]; i++)
		if (!is_digit(num1[i]))
			exit_error();

	for (int i = 0; num2[i]; i++)
		if (!is_digit(num2[i]))
			exit_error();

	char *result = mul_strings(num1, num2);

	_puts(result);
	free(result);

	return (0);
}

int _strlen(char *str)
{
	int len = 0;

	while (str[len])
		len++;

	return (len);
}

void _puts(char *str)
{
	for (int i = 0; str[i]; i++)
		_putchar(str[i]);
	_putchar('\n');
}

int is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

char *mul_strings(char *num1, char *num2)
{
	int len1 = _strlen(num1);
	int len2 = _strlen(num2);
	int len_result = len1 + len2;

	char *result = (char *)malloc(len_result + 1);

	if (result == NULL)
		exit(98);


	for (int i = 0; i < len_result; i++)
		result[i] = '0';

	result[len_result] = '\0';

	for (int i = len1 - 1; i >= 0; i--)
	{
		int carry = 0;

		for (int j = len2 - 1; j >= 0; j--)
		{
			int product = (num1[i] - '0') * (num2[j] - '0');
			int sum = product + (result[i + j + 1] - '0') + carry;

			result[i + j + 1] = (sum % 10) + '0';
			carry = sum / 10;
		}
		result[i] = (result[i] - '0') + carry + '0';
	}

	while (*result == '0' && *(result + 1) != '\0')
		result++;

	return (result);
}

void exit_error(void)
{
	_puts("Error");
	exit(98);
}
