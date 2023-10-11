#include "main.h"

/**
 * times_table - prints the 9x time table
 * @void: no argument
 * Return: 9x timetable
 */

void times_table(void)
{
	int i, j;
	int result;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			result = i * j;

			_putchar('0' + result);
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
