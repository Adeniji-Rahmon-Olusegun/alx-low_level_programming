#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: size is the number of elements in array
 * @value: value is the value to search for
 *
 * Return:  first index where value is located and -1 otherwise
 */

int jump_search(int *array, size_t size, int value)
{
	int jump_size;
	size_t idx, blk_start, jdx, kdx;

	if (array == NULL)
		return (-1);

	blk_start = 0;
	jump_size = sqrt(size);
	
	for (idx = 0; idx < size; idx+=jump_size)
	{
		if (array[idx] == value)
		{
			printf("Value found between indexes [%ld] and [%ld]\n", blk_start, idx);
			for (jdx = blk_start; jdx <= idx; jdx++)
				printf("Value checked array[%ld] = [%d]\n", jdx, array[jdx]);
			return (idx);
		}

		if (array[idx] < value)
			blk_start = idx;
		else
			break;
		printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);
	}

	for (kdx = blk_start; kdx < size; kdx++)
	{
		if (array[kdx] == value)
		{
			printf("Value found between indexes [%ld] and [%ld]\n", blk_start, idx);
			for (jdx = blk_start; jdx <= kdx; jdx++)
				printf("Value checked array[%ld] = [%d]\n", jdx, array[jdx]);
			return (kdx);
		}

		/*printf("Value checked array[%ld] = [%d]\n", kdx, array[kdx]);*/
	}

	printf("Value found between indexes [%ld] and [%ld]\n", blk_start, idx);
	printf("Value checked array[%ld] = [%d]\n", blk_start, array[blk_start]);

	return (-1);
}
