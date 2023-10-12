#include "main.h"

/**
 * print_line - prints line n times
 * @n: number of dahes
 * Return: void
 */

void print_line(int n)
{
	int i;

	if (n == 0 || n < 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
