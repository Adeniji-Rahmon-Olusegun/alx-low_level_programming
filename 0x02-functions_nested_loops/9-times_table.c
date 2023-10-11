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
			if (j == 0)
			{
				printf("%d", (i * j));
			} else
			{
				printf("%2d", (i * j));

				if (j < 9)
				{
					printf(", ");
				}
			}
		}
		printf("\n");
	}
}
