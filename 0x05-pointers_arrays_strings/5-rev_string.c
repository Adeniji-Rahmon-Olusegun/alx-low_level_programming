#include "main.h"

/**
 * rev_string - reverses string
 * @s: string
 * Return: void
 */

void rev_string(char *s)
{
	int i;
	char c;

	int j = 0;

	int counter = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		counter++;
	}

	while (j < counter)
	{
		c = s[j];
		s[j] = s[counter];
		s[counter] = c;

		j++;
		counter--;
	}
}
