#include "main.h"

/**
 * cap_string - capitalize initial words
 * @str: string
 * Return: string/pointer
 */

char *cap_string(char *str)
{
	int i = 0;

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i > 0 && ((str[i] == ' ' || str[i] == '\t' ||
		str[i] == '\n' ||
		str[i] == ',' ||
		str[i] == ';' ||
		str[i] == '.' ||
		str[i] == '!' ||
		str[i] == '?' ||
		str[i] == '"' ||
		str[i] == '(' ||
		str[i] == ')' ||
		str[i] == '{' ||
		str[i] == '}')))
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] -= 32;

	}

	return (str);
}

