#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns pointer that points to a new
 * string in a new allocated memory.
 * @str: string
 * Return: pointer
 */

char *_strdup(char *str)
{
	char *ptr_strcpy;

	int i, str_len = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		str_len++;
	}

	ptr_strcpy = (char *)malloc(sizeof(char) * sizeof(str_len));

	if (str == NULL)
	{
		return (NULL);
	}

	if (ptr_strcpy == NULL)
	{
		return (NULL);
	}

	i = 0;

	while (str[i] != '\0')
	{
		*(ptr_strcpy + i) = str[i];

		i++;
	}
	/*ptr_strcpy[i] = '\0';*/

	return (ptr_strcpy);
}
