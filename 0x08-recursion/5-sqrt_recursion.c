#include "main.h"

/**
 * root - get the root
 * @n: input integer
 * @r: possible root
 *
 * Return: square root of  or -1
 */

int root(int n, int r)
{
	if (n < 0 || (r * r) > n)
		return (-1);
	if (r * r == n)
		return (r);
	return (root(n, r + 1));

}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: input integer
 *
 * Return: square root of  or -1
 */

int _sqrt_recursion(int n)
{
	return (root(n, 1));
}
