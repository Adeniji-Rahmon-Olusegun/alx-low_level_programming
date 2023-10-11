#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints n size times table
 * @n: size of the times table
 * Return: n-size timetable
 */

void print_times_table(int n)
{
	int i, j;

	if (n > 15 || n < 0)
	{
		{};
	} else if (n < 15 && n != 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				if (j == 0)
				{
					printf("%d, ", (i * j));
				} else
				{
					printf("%3d", (i * j));
					if (j < n)
					{
						printf(", ");
					}
				}
			}
			printf("\n");
		}
	} else if (n == 0)
	{
		printf("%d", 0);
	}
}
