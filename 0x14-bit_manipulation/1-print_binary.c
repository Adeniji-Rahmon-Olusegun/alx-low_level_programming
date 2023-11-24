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
	unsigned long isolated_bit;
	int bit_checker, required_bits, i;

	bit_checker = 0;

	required_bits = sizeof(unsigned long int) * 8;

	for (i = required_bits - 1; i >= 0; i--)
	{
		isolated_bit = (n >> i) & 1;

		if (isolated_bit)
		{
			_putchar('0' + 1);
			bit_checker = 1;
		}
		else if (bit_checker || i == 0)
		{
			_putchar('0' + 0);
		}
	}
}
