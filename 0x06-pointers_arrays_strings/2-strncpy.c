#include "main.h"

/**
 * _strncpy - copies n-byte string from source
 * to destination
 * @dest: string destinantion
 * @src: string source
 * @n: n-byte
 * Return: pointer or string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j, k;
	int dest_len_tracker = 0;
	int src_len_tracker = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		src_len_tracker++;
	}

	for (j = 0; dest[j] != '\0'; j++)
	{
		dest_len_tracker++;
	}

	if (n < src_len_tracker)
	{
		for (k = 0; k < n; k++)
		{
			dest[k] = src[k];
		}
	}

	else if (n == src_len_tracker)
	{
		for (k = 0; k < src_len_tracker; k++)
		{
			dest[k] = src[k];
		}
	}
	else if (n > src_len_tracker)
	{
		for (k = 0; k < src_len_tracker; k++)
		{
			dest[k] = src[k];
		}
		dest[k] = '\0';
	}

	return (dest);
}
