#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print till 98
 * @n: no argument
 * Return: prints natural numbers till 98
 */

void print_to_98(int n)
{
	int i;

	for (i = n; i < 99; i++)
	{
		printf("%d, ", i);
	}
}
