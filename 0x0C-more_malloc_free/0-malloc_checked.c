#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: the length of memory to allocates
 *
 * Return:  a pointer to the allocated memory
 *	if malloc fails, the malloc_checked function cause normal process
 *         termination with a status value of 98
 *
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
