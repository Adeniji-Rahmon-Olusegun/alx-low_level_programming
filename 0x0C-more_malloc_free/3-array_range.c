#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * from MIN to MAX
 *
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int i;
	int *ptr_array;
	unsigned int arr_counter, index;

	if (min > max)
	{
		return (NULL);
	}
	
	arr_counter = 0;

	for (i = min; i <= max; i++)
	{
		arr_counter++;
	}

	ptr_array = (int *)malloc(sizeof(int) * arr_counter);

	if (ptr_array == NULL)
	{
		return (NULL);
	}

	index = 0;

	for (i = min; i <= max; i++)
	{
		*(ptr_array + index) = i;

		index++;
	}

	return (ptr_array);
}
