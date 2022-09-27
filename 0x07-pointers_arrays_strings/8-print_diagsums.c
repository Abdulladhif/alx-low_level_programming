#include "main.h"

/**
 * print_diagsums - print the sum the diognals of a square matrix of integer
 *
 * @a: This is the array to sum
 * @size: This is the length of the array
 *
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int i, diag1 = 0, diag2 = 0;

	for (i = 0; i < size; i++)
	{
		diag1 += *(a + i * (size + 1));
		diag2 += *(a + (i + 1) * (size - 1));
	}

	printf("%d, %d\n", diag1, diag2);
}
