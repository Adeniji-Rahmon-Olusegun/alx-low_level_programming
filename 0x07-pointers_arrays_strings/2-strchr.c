#include "main.h"

/**
 * _strchr - finds first occurence of a character
 * @s: string
 * @c: character
 * Return: pointer
 */

char *_strchr(char *s, char c)
{
	int i, j;
	static char p_c[100];

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
			return (p_c);
		}
	}

	return (NULL);
}
