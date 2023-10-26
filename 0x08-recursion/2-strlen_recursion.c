#include "main.h"

/**
 * _strlen_recursion - calculates the length of
 * a string
 * @s: string
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int counter = 1;

	if (*s == '\0')
	{
		return (0);
	}

	return (counter + _strlen_recursion(s + 1));
}
