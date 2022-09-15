#include "main.h"

/**
 * _isupper - Checks for uppercase.
 * @c: the input value to be checked.
 *
 * Return 1 for uppercase, otherwise Return 0.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
