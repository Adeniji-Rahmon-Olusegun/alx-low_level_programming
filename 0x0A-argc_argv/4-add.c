#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"

/**
 * main - adds two number
 * @argc: argument count
 * @argv: vector
 * Return: result and 1 otherwise
 */

int main(int argc, char *argv[])
{
	int i;
	int string_checker;

	int result;

	if (argc == 1)
	{
		printf("%d\n", 0);

		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (string_checker = 0; argv[i][string_checker] != '\0'; string_checker++)
		{
			if (!isdigit(argv[i][string_checker]))
			{
				printf("Error\n");
				exit(1);
			}
		}

		result += atoi(argv[i]);
	}

	printf("%d\n", result);

	return (0);
}
