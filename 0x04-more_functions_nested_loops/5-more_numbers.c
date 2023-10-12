#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints numbers 0 to 14 ten times
 * @void: no argument
 * Return: void
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			printf("%d", j);
		}
		if (i != 9)
		{
			_putchar('\n');
		}

	}
	_putchar('\n');
}
