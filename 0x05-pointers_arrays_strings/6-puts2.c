#include "main.h"

/**
 * puts2 - prints every other character
 * @str: string
 * Return: void
 */

void puts2(char *str)
{
	int i, j;

	counter = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		counter++;
	}

	for (j = 0; j < counter; j++)
	{
		if (j % 2 == 0)
		{
			_putchar(str[j]);
		}
		else
		{
			{};
		}
	}

	_putchar('\n');

}
