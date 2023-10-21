#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: string
 * Return: string/pointer
 */

char *leet(char *str)
{
	int i, j;

	char strings[10] = {'A', 'a', 'E', 'e', 'O', 'o',  'T', 't', 'L', 'l'};
	char codes[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	i = 0;

	while (str[i] != '\0')
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == strings[j])
			{
				str[i] = codes[j];
				break;
			}
		}

		i++;
	}

	return (str);
}
