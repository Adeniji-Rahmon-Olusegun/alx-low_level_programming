#include "main.h"

int get_nsize(unsigned long int n);

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
	unsigned long int bit_num;
	unsigned long int *ptr_binary;
	int i, bit_checker, bit_size, n_size, desired_bit, idx;

	if (index >= n)
		return (-1);
	if (index > (sizeof(unsigned long int)))
		return (-1);
	n_size = get_nsize(n);
	bit_checker = 0;

	ptr_binary = (unsigned long int *)malloc(sizeof(unsigned long int) * n);

	if (ptr_binary == NULL)
		return (-1);

	bit_size =  sizeof(unsigned long int) * 8;

	idx = 0;

	for (i = bit_size - 1; i >= 0; i--)
	{
		bit_num = (n >> i) & 1;

		if (bit_num)
		{
			ptr_binary[idx] = 1;
			bit_checker = 1;
			idx++;
		}
		else if (bit_checker || i == 0)
		{
			ptr_binary[idx] = 0;
			idx++;
		}
	}

	desired_bit = ptr_binary[n_size - index - 1];

	return (desired_bit);
}

/**
 * get_nsize - get the size/length of the decimal
 * number converted to binary
 *
 * @n: decimal number
 *
 * Return: length of the binary number;
 */

int get_nsize(unsigned long int n)
{
	int i, bit_checker, bit_size, counter;
	unsigned long int bit_num;

	bit_size =  sizeof(unsigned long int) * 8;

	counter = 0;
	bit_checker = 0;

	for (i = bit_size - 1; i >= 0; i--)
	{
		bit_num = (n >> i) & 1;

		if (bit_num)
		{
			bit_checker = 1;
			counter++;
		}
		else if (bit_checker || i == 0)
		{
			counter++;
		}
	}

	return (counter);
}
