#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of characters
 * @size: array size
 * @c: character for initialization
 * Return: pointer
 */

char *create_array(unsigned int size, char c)
{
	char *ptr_memblock;
	unsigned int tracker = 0;

	ptr_memblock = (char *)malloc(sizeof(char) * size);

	if (size == 0)
	{
		return (NULL);
	}

	while (tracker < size)
	{
		*(ptr_memblock + tracker) = c;

		tracker++;
	}

	free(ptr_memblock);

	return (ptr_memblock);
}
