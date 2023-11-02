#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - returns a pointer to an
 * allocated memory
 *
 * @b: number of integers
 *
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	void *ptr_b;

	ptr_b = malloc(b);

	if (ptr_b == NULL)
	{
		exit(98);
	}

	return (ptr_b);
}
