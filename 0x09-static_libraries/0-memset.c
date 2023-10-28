#include "main.h"

/**
 * _memset - fills memory block with first n
 * bytes of a charater
 * @s: pointer
 * @b: character
 * @n: n-bytes
 * Return: pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		s[i] = b;

		i++;
	}

	return (s);
}
