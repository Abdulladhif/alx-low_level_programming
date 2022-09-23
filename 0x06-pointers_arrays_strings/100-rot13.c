#include "main.h"

/**
 * rot13 - encodes a string using ROT13
 * @s: input string
 *
 * Return: string converted to ROT13
 */


char *rot13(char *s)
{
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i = 0, j;

	while (s[i] != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (a[j] == s[i])
			{
				s[i] = rot[j];
				break;
			}
		}
		i++;
	}
	return (s);
}
