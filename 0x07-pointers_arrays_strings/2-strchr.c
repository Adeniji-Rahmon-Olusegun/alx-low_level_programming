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
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (&s);
		}
		s++;
	}

	return (NULL);
}
