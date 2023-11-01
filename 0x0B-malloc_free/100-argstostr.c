#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates argv strings
 * @ac: argumnt count
 * @av: srgument vector
 * Return: pointer to concatenated strings
 */

char *argstostr(int ac, char **av)
{
	char *ptr_arg;
	int i, j, k, counter, total_str_len = 0, sum;

	counter = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		sum = 0;

		for (j = 0; av[i][j] != '\0'; j++)
		{
			sum++;
		}
		total_str_len += sum;
	}

	ptr_arg = (char *)malloc(sizeof(char) * total_str_len + ac);

	if (ptr_arg == NULL)
		free(ptr_arg);
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		k = 0;

		while (av[i][k] != '\0')
		{
			*(ptr_arg + counter) = av[i][k];
			counter++;
			k++;
		}
		*(ptr_arg + counter) = '\n';
		counter++;
	}
	return (ptr_arg);
}
