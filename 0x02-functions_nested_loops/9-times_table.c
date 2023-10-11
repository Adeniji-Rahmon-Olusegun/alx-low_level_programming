#include "main.h"

/**
 * times_table - prints the 9x time table
 * @void: no argument
 * Return: 9x timetable
 */

void times_table(void);
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			_putchar('0' + (i * j));
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
