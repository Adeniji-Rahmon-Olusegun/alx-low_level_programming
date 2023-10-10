#include "main.h"

/**
 * _isalpha - checks if character is an alphabet
 * @c: character to be checked
 * Return: 1 if alphabet and 0 otherwise
 */

int _isalpha(int c)
{
	if (c != (int)(c))
	{
		if (c >= (int)('a') && c <= (int)('z'))
		{
			return (1);

		} else if (c >= (int)('A') && c <= (int)('Z'))
		{
			return (1);
		}

	}
	return (0);
}
