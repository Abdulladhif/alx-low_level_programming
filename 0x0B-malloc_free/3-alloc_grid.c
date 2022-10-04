#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid -  returns a pointer to a 2 dimensional array of integers
 * @width: input width
 * @height: input height
 *
 * Return: NULL on failure, NULL if @width or @height is 0 or negative,
 *	otherwise a pointer to a 2 dimensional array of integers
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int i;
	int j;
	int k;

	if (width <= 0 || height <= 0)
		return (NULL);

	ar = malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			while (i >= 0)
			{
				free(array[i]);
				i--;
			}
			free(array);
			return (NULL);
		}
	}

	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
			array[j][k] = 0;
	}
	return (array);
}
