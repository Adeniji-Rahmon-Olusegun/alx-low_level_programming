#include "main.h"

/**
 * set_bit - set the value of a bit to 1
 *
 * @n: pointer to the decimal valuehttp
 * @index: index where the change will be made
 *
 * Return: 1 if sucess and -1 otherwise
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bit_size;
	unsigned long int mask_for_manipulation;

	if (n == NULL)
		return (-1);
	
	bit_size = sizeof(unsigned long int) * 8;

	if (index > bit_size)
	{
		return (-1);
	}

	mask_for_manipulation = 1 << index;
	*n = *n | mask_for_manipulation;

	return (1);
}
