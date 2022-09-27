#include "main.h"

/**
 * _strstr - loactes a substring
 * @haystack: - string in which to check for needle
 * @needle: - substring to find in haystack
 *
 * Return: a pointer to the beginning of the located substring, or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *temp;

		temp = haystack;

		while (*needle == *haystack)
		{
			haystack++, needle++;
		}

		if (*needle == '\0')
			return (temp);

		haystack++;
	}
	return (NULL);
}

