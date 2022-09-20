#include "main.h"
#include <string.h>

/**
 * puts_half - prints a string
 *	followed by a new line
 * @str: input
 * Return: nothing
 */
void puts_half(char *str)
{
	int n, len;

	len = strlen(str);

	for (n = ((len - 1) / 2) + 1; n < len; n++)
		_putchar(str[n]);

	_putchar('\n');

}
