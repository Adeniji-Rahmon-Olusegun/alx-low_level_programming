#include "main.h"

/**
 * _strncat - concatebates two strings with at
 * most n-bytes
 * @dest: destination string
 * @src: source string
 * @n: number of bytes
 * Return: pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j, k;
	int dest_len_tracker = 0;
	int src_len_tracker = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		dest_len_tracker++;
	}

	for (j = 0; src[j] != '\0'; j++)
	{
		src_len_tracker++;
	}

	if (n == src_len_tracker)
	{
		for (k = 0; k <= src_len_tracker; k++)
		{
			dest[k + dest_len_tracker] = src[k];
		}
	}
	else if (n < src_len_tracker)
	{
		for (k = 0; k < n; k++)
		{
			dest[k + dest_len_tracker] = src[k];
		}
	}
	else if (n > src_len_tracker)
	{
		for (k = 0; k < src_len_tracker; k++)
		{
			dest[k + dest_len_tracker] = src[k];
		}
	}

	return (dest);
}
