#include "main.h"

/**
 * _square_condition_checker - checks if an
 * integer has a perfect square
 * @n: number
 * @root_guess: root guess
 * Return: root
 */

int _square_condition_checker(int n, int root_guess)
{
	if ((root_guess * root_guess) == n)
	{
		return (root_guess);
	}
	else if ((root_guess * root_guess) > n)
	{
		return (-1);
	}
	return (_square_condition_checker(n, root_guess + 1));
}

/**
 * _sqrt_recursion - returns the square root
 * of a natural number
 * @n: number to be checked
 * Return: root or -1;
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_square_condition_checker(n, 0));
}
