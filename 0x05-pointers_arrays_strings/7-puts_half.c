#include "main.h"

/**
 * puts_half - prints half of the characters
 * @str: string
 * Return: void
 */

void puts_half(char *str)
{
	int i, j, k;
	int counter;

	counter = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		counter++;
	}

	if (counter % 2 == 0)
	{
		for (j = (counter / 2); j < counter; j++)
		{
			_putchar(str[j]);
		}
	}
	else if (counter % 2 != 0)
	{
		for (k = ((counter - 1) / 2) + 1; k < counter; k++)
		{
			_putchar(str[k]);
		}
	}

	_putchar('\n');
}
