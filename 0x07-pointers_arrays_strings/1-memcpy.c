#include "main.h"

/**
 * _memcpy - copies n bytes from source to
 * destination
 * @src: source
 * @dest: destination
 * @n: n-bytes
 * Return: pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		dest[i] = src[i];

		i++;
	}

	return (dest);
}
