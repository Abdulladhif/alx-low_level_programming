#include "main.h"

/**
 * factorial -  returns the factorial of a given number
 * @n: given integer
 *
 * Return: if n < 0, if n = 0, 1 or factorial number
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}

