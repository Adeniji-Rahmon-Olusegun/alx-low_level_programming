#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two number
 * @argc: argument count
 * @argv: vector
 * Return: result and 1 otherwise
 */

int main(int argc, char *argv[])
{
	int result;

	int arg1;
	int arg2;

	if ((argc - 1) < 2 || (argc - 1) > 2)
	{
		printf("Error\n");

		exit(1);
	}

	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[2]);

	result = arg1 * arg2;

	printf("%d\n", result);

	return (0);
}
