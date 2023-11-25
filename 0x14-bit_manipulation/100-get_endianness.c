#include "main.h"

/**
 * get_endianess - checks endianess
 *
 * Return: 0 if big endian and 1 if
 * little endian
 */

int get_endianness(void)
{
	short int endian_var = 0x01;

	return (*(char *)&endian_var == 0x01);
}
