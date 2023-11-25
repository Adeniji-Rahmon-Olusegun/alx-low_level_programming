#include "main.h"

unsigned int count_bit(unsigned long int x);

/**
 * flip_bits - evaluates the number of bits to flip
 * to move from one number to another
 *
 * @n: first number
 * @m: second number
 *
 * Return: number of flips
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flip_count;
	unsigned long int flip_check;

	flip_check = n ^ m;

	flip_count = count_bit(flip_check);

	return (flip_count);

}

/**
 * count_bit - evaluates the number of set bits
 *
 * @x: number to check
 *
 * Return: number of set bits
 */

unsigned int count_bit(unsigned long int x)
{
	unsigned int counter;

	counter = 0;

	while (x)
	{
		counter += x & 1;
		x >>= 1;
	}

	return (counter);
}
