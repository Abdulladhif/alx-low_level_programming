#include "main.h"

/**
 * _isupper - checks if a  character is uppercase or not
 * @c: the input value to be checked.
 *
 * Return: 1 for uppercase, 0 otherwise.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
