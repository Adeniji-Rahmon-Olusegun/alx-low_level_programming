#include "main.h"
#include <stdlib.h>

/**
 * _strstr - finds first occurence of the substring
 * in the main string
 * @haystack: main string
 * @needle: substring
 * Return: pointer
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;
	int haystack_len, needle_len;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		haystack_len++;
	}

	for (j = 0 ; needle[j] != '\0'; j++)
	{
		needle_len++;
	}

	for (i = 0; i < haystack_len; i++)
	{
		for (j = 0; j < needle_len; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
		}

		if (j == needle_len)
		{
			return (&haystack[i]);
		}
	}
	return (NULL);
}
