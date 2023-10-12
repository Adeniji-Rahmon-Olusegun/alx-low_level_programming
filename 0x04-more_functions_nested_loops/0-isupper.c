#include "main.h"

/**
 * _isupper - checks if a character is uppercase
 * @c: character to be checked
 * Return: 0 if uppercase and 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 || c <= 90)
	{
		return (1);
	}

	return (0);
}
