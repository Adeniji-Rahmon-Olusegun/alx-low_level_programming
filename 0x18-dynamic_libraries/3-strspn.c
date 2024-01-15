#include "main.h"

/**
 * _strspn - obtains a number of bytes
 * in the initial segment
 * @s: string1
 * @accept: string2
 * Return: unsigned int count
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, tracker;

	for (i = 0; s[i] != '\0'; i++)
	{
		tracker = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				tracker++;
			}
		}

		if (tracker ==  0)
		{
			return (i);
		}

	}
	return (i);
}
