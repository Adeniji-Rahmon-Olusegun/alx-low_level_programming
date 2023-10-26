#include "main.h"

/**
 * _pow_recursion - computes the of a number
 * raised to the power of another
 * @x: base number
 * @y: power
 * Return: int
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}
