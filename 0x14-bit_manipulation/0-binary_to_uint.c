#include "main.h"

unsigned int string_length(const char *b);

/**
 * binary_to_uint - converts binary to unsigned int
 *
 * @b: string containing binary(0's and 1's)
 *
 * Return: decimal number or 0 if NULL/containg non-char
 */

unsigned int binary_to_uint(const char *b)
{
	int char_digit;
	unsigned int binary_sum, string_len;

	if (b == NULL)
	{
		return (0);
	}

	string_len = string_length(b);

	binary_sum = 0;

	while (*b != '\0' &&  string_len > 0)
	{
		char_digit = (*b) - '0';

		if (char_digit != 0 && char_digit != 1)
		{
			return (0);
		}
		else
		{
			binary_sum += ((char_digit) << (string_len - 1));
		}

		b++;
		string_len--;
	}

	return (binary_sum);
}

/**
 * string_length - returns the length of string
 *
 * @b: string containing binary(0's and 1's)
 *
 * Return: length of string
 */

unsigned int string_length(const char *b)
{
	unsigned int i, count_str;

	count_str = 0;

	for (i = 0; b[i] != '\0'; i++)
	{
		count_str++;
	}

	return (count_str);
}
