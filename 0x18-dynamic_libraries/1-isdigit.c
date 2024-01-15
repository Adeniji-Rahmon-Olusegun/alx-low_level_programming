#include "main.h"

/**
 * _isdigit - checks if a character is a number
 * @c: the character to be checked
 * Return: 1 if number and 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
