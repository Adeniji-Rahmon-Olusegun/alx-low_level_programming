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

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i < n)
		{
			s[i] = b;
		}
	}

	s[n];

	return (s);
}
