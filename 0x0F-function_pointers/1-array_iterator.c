#include "function_pointers.h"

/**
 * array_iterator - executes a function passed
 * as a parameter on each element of an array
 *
 * @array: array of integers
 * @size: array length/size
 * @action: function pointer
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t index;

	if (array != NULL && action != NULL && size != 0)
	{
		for (index = 0; index < size; index++)
		{
			(*action)(array[index]);
		}
	}
}
