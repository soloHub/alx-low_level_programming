#include "main.h"

/**
 * rot13 - encodes a string in rot13
 * @str: string to be encoded
 *
 * Return: the resulting string
 */
char *rot13(char *str)
{
	int i, j;

	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"; /*alphabet*/
	char key[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"; /*rot13 key*/

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (str[i] == a[j])
			{
				str[i] = key[j];
				break;
			}
		}
	}

	return (str);
}
