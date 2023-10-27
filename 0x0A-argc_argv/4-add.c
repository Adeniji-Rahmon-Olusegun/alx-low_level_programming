#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * main - adds two number
 * @argc: argument count
 * @argv: vector
 * Return: result and 1 otherwise
 */

int main(int argc, char *argv[])
{
	int i, is_a_number;
	size_t j;

	int result = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	else if (argc >= 2)
	{
		for (i = 1; i < argc; i++)
		{
			is_a_number = 1;
			for (j = 0; j < strlen(argv[i]); j++)
			{
				if (!isdigit(argv[i][j]))
				{
					is_numeric = 0;
					break;
				}
			}

			if (!is_a_number)
			{
				printf("Error\n");
				exit(1);
			}
			else
			{
				result += atoi(argv[i]);
			}
		}
	}

	printf("%d\n", result);

	return (0);
}
