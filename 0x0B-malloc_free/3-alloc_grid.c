#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns pointer to a 2-D array
 * @width: columns size
 * @height: row size
 * Return: pointer to 2-D array
 */

int **alloc_grid(int width, int height)
{
	int i, j, total_elements;
	int **ptr_zeros;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	total_elements = width * height;

	if ((sizeof(int) * total_elements) < (size_t)(4 * total_elements))
	{
		return (NULL);
	}

	ptr_zeros = (int **)malloc(sizeof(int) * height);

	if (ptr_zeros == NULL)
	{
		free(ptr_zeros);

		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		ptr_zeros[i] = (int *)malloc(sizeof(int) * width);
		
		if (ptr_zeros[i] == NULL)
		{
			for (i--; i >= 0; i--)
			{
				free(ptr_zeros[i]);
			}
				
			free(ptr_zeros);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			*(ptr_zeros[i] + j) = 0;
	}
	return (ptr_zeros);
}
