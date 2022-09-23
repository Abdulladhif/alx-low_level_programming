#include "main.h"

/**
 *leet - encodes a string into 1337.
 *letters a and A are replaced by 4.
 *Letters e and E are replaced by 3
 *Letters o and O are replaced by 0
 *Letters t and T are replaced by 7
 *Letters l and L are replaced by 1
 *@s: pointer to string.
 *
 *Return: pointer to string leecode.
 */
char *leet(char *s)
{
	int i = 0, j;
	char leetChars[] = "aAeEoOtTlL";
	char leetNums[] = "4433007711";

	while (s[i] != '\0')
	{
		for (j = 0; j <= 9; j++)
		{
			if (leetChars[j] == s[i])
				s[i] =  leetNums[j];
		}
	i++;
	}

	return (s);
}

