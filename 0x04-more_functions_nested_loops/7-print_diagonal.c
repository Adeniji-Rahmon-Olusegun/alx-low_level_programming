#include <stdio.h>

/**
 * print_diagonal - prints diagonal line
 * @n: number of dashes
 * Return: void
 */

void print_diagonal(int n)
{
	int i, j;

	if (n == 0 || n < 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('\\');
			_putchar('\n');
			_putchar(' ');

			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
		}
	}
}
