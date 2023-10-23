#include "main.h"
#include <stdlib.h>

/**
 * _strchr - finds first occurence of a character
 * @s: string
 * @c: character
 * Return: pointer
 */

char *_strchr(char *s, char c)
{
	int i, j;
	static char p_c[400];

	i = 0;
	j = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			while (s[i] != '\0')
			{
				p_c[j] = s[i];

				i++;
				j++;
			}
			p_c[j] = '\0';
			return (p_c);
		}
		i++;
	}

	return (NULL);
}
