#include "main.h"

/**
 * jack_bauer - prints 24hrs time
 * @void: receives no argument
 * Return: 24hrs time
 */

void jack_bauer(void)
{
	int i, j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			if (i < 10 || j < 10)
			{
				_putchar('0' + 0);
				_putchar('0' + i);
				_putchar(':');
				_putchar('0' + 0);
				_putchar('0' + j);
				_putchar('\n');
			} else
			{
				_putchar('0' + i);
				_putchar(':');
				_putchar('0' + j);
			}

		}
	}
}
