#include "main.h"
#include <stdio.h>

/**
 *print_array - prints n elements of array integers,
 *	followed by new line
 * @a: input array
 * @n: array size
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
