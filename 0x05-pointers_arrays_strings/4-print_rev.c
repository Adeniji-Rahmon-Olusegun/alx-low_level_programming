#include "main.h"

/**
 * print_rev - prints the reverse of strings
 * @s: string
 * Return: void
 */

void print_rev(char *s)
{
	char c;
	char *start = s;
	char *end = s;

	while (*end != '\0')
	{
		end++;
	}

	while (start < end)
	{
		c = *start;
		*start = *end;
		*end = c;
		_putchar(*start);

		end--;
		start++;
	}

	_putchar('\n');
}
