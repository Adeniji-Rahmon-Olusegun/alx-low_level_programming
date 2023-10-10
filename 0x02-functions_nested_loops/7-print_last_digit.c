#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: number to be checked
 * Return: last digit of number
 */

int print_last_digit(int n)
{
	int m;

	m = n % 10;

	if (n < 0)
	{
		m = -(m);
	}
	_putchar('0' + m);
	return (m);
}
