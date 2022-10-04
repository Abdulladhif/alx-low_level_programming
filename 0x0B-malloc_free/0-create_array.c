#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 *	and initializes it with a specific char.
 * @size: - input size array
 * @c: - specific char to initialize the array wih
 *
 * Return: Null, if size == 0
 *	otherwise apointer to the array.
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(size * sizeof(*array));
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
