#include "main.h"
/**
 * infinite_add - Adds two numbers.
 * @n1: The first number to be added.
 * @n2: The second number to be added.
 * @r: The buffer to store the result.
 * @size_r: The buffer size.
 *
 * Return: sum of two integers
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j;

	while (n1[i] != '\0')
		i++;

	while (n2[j] != '\0')
		j++;

	*r = *(r + size_r) + '0';

	while (n1[i] > 0 || n2[j] > 0)
	{
		if (n1[i] + n2[j] > 0)
			*r = n1[i - 1] + n2[j - 1] + 1;
		else
			*r = n1[i] + n2[j];

		i--;
		j--;
	}

	return (r);

}

