#include "main.h"
#include <stdlib.h>

/**
 * _strpbrk - finds first occurence of the substring
 * in the main string
 * @s: main string
 * @accept: substring
 * Return: pointer
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}

	return (NULL);
}
