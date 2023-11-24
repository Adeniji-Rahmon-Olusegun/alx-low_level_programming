#include "main.h"

/**
 * get_bit - get the value of a bit at a given
 * index
 *
 * @n: decimal number
 * @index: index where bit is picked
 *
 * Return: value at the given index otherwise -1;
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bit_size;

	bit_size =  sizeof(unsigned long int) * 8;

	if (index > bit_size)
		return (-1);

	n = n >> index;

	return (n & 1);
}

