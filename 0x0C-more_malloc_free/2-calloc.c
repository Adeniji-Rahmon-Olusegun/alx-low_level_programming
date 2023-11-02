#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: n-bytes of data type
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr_array;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr_array = malloc(size * nmemb);

	if (ptr_array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < nmemb; i++)
	{
		ptr_array[i] = 0;
	}

	return (ptr_array);
}
