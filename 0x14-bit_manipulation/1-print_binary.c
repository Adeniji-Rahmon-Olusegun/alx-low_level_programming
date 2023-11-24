#include "main.h"

/**
 * print_binary - prints binary of representations
 * of a number
 *
 * @n: number to be converted
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int binary_power;
	unsigned long int value_update, binary_base;

	binary_power = 11;
	value_update = n;

	if (n == 0)
		_putchar('0' + 0);
	else if (n == 1)
		_putchar('0' + 1);
	else
	{
		while (binary_power != -1)
		{
			binary_base = 1 << binary_power;

			if (binary_base <= value_update)
			{
				value_update -= binary_base;
				_putchar('0' + 1);
			}
			else
			{
				if (value_update != n)
					_putchar('0' + 0);
			}

			binary_power--;
		}
	}
}
