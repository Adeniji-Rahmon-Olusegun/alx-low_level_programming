#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the diagonal
 * of a square matrix
 * @a: pointer
 * @size: dimension of the matrix
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i;

	int result1 = 0;
	int result2 = 0;

	for (i = 0; i < size; i++)
	{

		result1 += a[i * size + i];
		result2 += a[i * (size - 1 - i)];
	}

	printf("%d, %d\n", result1, result2);
}
