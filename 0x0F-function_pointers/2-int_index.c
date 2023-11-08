#include "function_pointers.h"

/**
 * int_index - searches for an integer
 *
 * @array: array of integers
 * @size: array size/len
 * @cmp: function pointer
 *
 * Return: index position of integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int idx, result;

	int tracker = 0;

	if (size <= 0)
	{
		return (-1);
	}

	if (array != NULL && cmp != NULL && size > 0)
	{
		for (idx = 0; idx < size; idx++)
		{
			result = (*cmp)(array[idx]);

			if (result == 1)
			{
				return (idx);
			}

			tracker += 1;
		}
	}

	if (tracker == size)
	{
		return (-1);
	}

	return (idx);
}
