#include "main.h"

/**
 * _strncat - function concatinates two strings.
 * it will use n bytes from src. src does not need to include null terminator
 * @dest: first string
 * @src: second string
 * @n: bytes from src
 *
 * Return:  a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, len = 0;

	while (dest[len] != '\0')
		len++;

	for (i = 0; i < n && src[i]  != '\0'; i++)
		dest[len + i] = src[i];

	dest[len + i] = '\0';

	return (dest);
}
