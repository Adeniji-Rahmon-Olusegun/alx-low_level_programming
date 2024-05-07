#include "search_algos.h"

/**
 * binary_search -  searches for a value in a sorted array
 * of integers using the Binary search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index where value is located or -1 otherwise
 */

int binary_search(int *array, size_t size, int value)
{
	int idx;
	int lw_bnd, up_bnd, mid;

	lw_bnd = 0;
	up_bnd = size - 1;

	if (array == NULL)
		return (-1);

	while (lw_bnd <= up_bnd)
	{
		printf("Searching in array: ");

		mid = (lw_bnd + up_bnd) / 2;

		for (idx = lw_bnd; idx <= up_bnd; idx++)
		{
			printf("%d", array[idx]);

			if (idx != up_bnd)
				printf(", ");
		}

		printf("\n");

		if (value == array[mid])
		{
			return (mid);
		}
		else if (value < array[mid])
		{
			up_bnd = mid - 1;
		}
		else
			lw_bnd = mid + 1;
	}

	return (-1);
}
