#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees memory cobtaining dog
 * template initialization
 *
 * @d: pointer
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d);
	}
	else
	{
		return (NULL);
	}
}
