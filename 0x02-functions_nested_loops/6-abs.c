#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: number to compute
 * Return: absolute value of the integer
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	} else if (n == 0)
	{
		return (0);
	}
	return (-(n));
}

