#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array of integers
 * @a: array
 * @n: array size
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int tmp, i;

	n = n - 1;
	i = 0;
	while (i <= n)
	{
		tmp = a[i];
		a[i++] = a[n];
		a[n--] = tmp;
	}
}
