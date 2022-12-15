#include "main.h"
/**
 * _strpbrk - searches for any of a set of bytes
 * @s: string to check
 * @accept: string to check against
 *
 * Return: number of bytes of s which consist only of bytes from accept
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
				break;
		}
		if (accept[j])
			return (s + i);
	}
	return (0);
}
