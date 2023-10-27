#include "main.h"

/**
 * prime_helper_function - checks number if prime
 * using set conditions
 * @n: number
 * @div: divisor
 * Return: 1 if prime and 0 otherwise
 */

int prime_helper_function(int n, int div)
{

	if (n <= 1)
	{
		return (0);
	}
	else if (div == 1)
	{
		return (1);
	}
	else if (n % div == 0)
	{
		return (0);
	}
	return (prime_helper_function(n, div - 1));
}


/**
 * is_prime_number - also checks if number is prime
 * @n: number to be checked
 * Return: 1 if prime and 0 otherwise
 */

int is_prime_number(int n)
{
	return (prime_helper_function(n, n - 1));
}
