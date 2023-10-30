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

	int i, str_len_count = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		str_len_count++;
	}

	ptr_strcpy = (char *)malloc(sizeof(char) * sizeof(str_len_count + 1));

	if (str == NULL)
	{
		return (NULL);
	}

	if ((size_t sizeof(char) * sizeof(str_lencounter + 1)) < (str_len_count + 1))
	{
		return (NULL);
	}

	while (*str != '\0')
	{
		*ptr_strcpy = *str;

		ptr_strcpy++;
		str++;
	}
	*ptr_strcpy[i] = '\0';

	return (ptr_strcpy);
}
