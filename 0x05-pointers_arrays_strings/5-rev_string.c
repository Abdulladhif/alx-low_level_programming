#include "main.h"
#include <string.h>

/**
 * rev_string - prints string in reverse
 * @s: string input
 * Return: nothing
 */
void rev_string(char *s)
{

	int len = 0, index, p;
	char tmp;

	len = strlen(s);

	for (index = len - 1; index >= len / 2; index--)
	{
		p = len - index - 1;
		tmp = s[index];
		s[index] = s[p];
		s[p] = tmp;
	}
}
