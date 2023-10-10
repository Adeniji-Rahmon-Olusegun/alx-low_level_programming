#include "main.h"

/**
 * _islower - checks if a letter is lowercase
 * @c: letter to check
 * Return: 1 if c lowercase and 0 otherwise
 */

int _islower(int c)
{
	if (c >= (int)('a') && c <= (int)('z'))
	{
		return (1);
	}

	return (0);
}
