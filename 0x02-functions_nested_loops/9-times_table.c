#include "main.h"
#include <stdio.h>

/**
 * times_table - prints the 9x time table
 * @void: no argument
 * Return: 9x timetable
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			printf("%d, ", (i * j));
		}
		_putchar('\n');
	}
}
