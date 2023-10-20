#include "main.h"

/**
 * reverse_array - reverses elements of an array
 * @a: array
 * @n: number of elements of the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, j;
	int temp_var;

	i = 0;
	j = n - 1;

	while (i < j)
	{
		temp_var = a[i];
		a[i] = a[j];
		a[j] = temp_var;

		i++;
		j--;
	}
}
