#include "main.h"

/**
 * is_prime - checks to see if prime number
 * @p: possible prime number
 * @f: factor to check
 *
 * Return: Return: 1 if the input integer is a prime number, otherwise return 0
 */

int is_prime(int p, int f)
{
	if (f == 1)
		return (1);
	if (p % f == 0 && f > 0)
		return (0);
	return (is_prime(p, f - 1));
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 * otherwise return 0
 * @n: input integer
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */

int is_prime_number(int n)
{
	int f = n / 2;

	if (n <= 1)
		return (0);
	return (is_prime(n, f));
}
