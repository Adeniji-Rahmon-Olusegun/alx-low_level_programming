#include "main.h"

/**
 * is_palindrome - checks if a string is
 * palindrone
 * @s: string
 * Return: 1 if palindrome and 0 otherwise
 */

int is_palindrome(char *s)
{
	int i = 0;
	int str_len = 0;

	for (i = 0; s[i] != '\0'; i++)
		str_len++;
	i = 0;

	while (i < str_len)
	{
		if (s[i] == s[str_len - 1])
		{
			str_len--;
			i++;
		}
		else
			return (0);
	}
	return (1);
}
