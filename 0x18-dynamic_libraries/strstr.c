#include "main.h"
#include <stddef.h>
/**
 * _strstr - loactes a substring
 * @haystack: - string in which to check for needle
 * @needle: - substring to find in haystack
 *
 * Return: a pointer to the beginning of the located substring, or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;

	while (haystack[i])
	{
		j = 0;
		while (needle[j])
		{
			if (needle[j] == haystack[i + j])
				j++;
			else if (needle[j] != haystack[i + j])
				break;
		}
		if (needle[j] == '\0')
			return (haystack + i);

		i++;
	}
	return (NULL);
}
