#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if sucess
 */

int main(int argc, char *argv[])
{
	int result;
	int arg1, arg2;

	if ((argc - 1) < 2 || (argc - 1) > 2)
	{
		printf("Error\n");

		exit(98);
	}

	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[2]);

	if (!(isdigit(arg1)) || !(isdigit(arg2)))
	{
		result = arg1 * arg2;

		printf("%d\n", result);
	}

	else
	{
		printf("Error\n");

		exit(98);
	}

	return (0);
}
