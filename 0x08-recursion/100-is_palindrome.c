#include "main.h"

int check_palindrome(char *s, int len, int i);

/**
 * is_palindrome - check @s is a palindrome
 * @s: string to check
 * Return: 1 if @s is a palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	if (*s == '\0' || _strlen_recursion(s) == 1)
		return (1);
	return (check_palindrome(s, _strlen_recursion(s), 0));
}

/**
 * check_palindrome - check @s is a palindrome
 * @s: string to check
 * @len: length of string
 * @i: index
 * Return: 1 if @s is a palindrome and 0 if not
 */

int check_palindrome(char *s, int len, int i)
{
	if (s[i] == s[len - i - 1])
		if (i < (len / 2 - 1))
			return (1 * check_palindrome(s, len, i + 1));
		else
			return (1);
	else
		return (0);
}

/**
 * _strlen_recursion - prints length of @s
 * @s: char pointer to string
 * Return: lengthe of @s
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}

