#include "main.h"
#include <string.h>

/**
 * print_rev - prints string in reverse
 * @s: string input
 * Return: nothing
 */
void print_rev(char *s)
{

	int len = 0, index;

	len = strlen(s);

	for (index = len - 1; index >= 0; index--)
		_putchar(s[index]);

	_putchar('\n');
}
