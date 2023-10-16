#include "main.h"

/**
 * print_rev - prints the reverse of strings
 * @s: string
 * Return: void
 */

void print_rev(char *s)
{
	int i, j;
	int counter = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		counter++;
	}

	for (j = counter - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}

	_putchar('\n');
}
