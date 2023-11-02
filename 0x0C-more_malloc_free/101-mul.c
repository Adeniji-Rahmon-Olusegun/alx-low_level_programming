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
	long int *ptr;
	long int result;

	if ((argc - 1) < 2 || (argc - 1) > 2)
	{
		printf("Error\n");

		exit(98);
	}

	ptr = (long int *)malloc(sizeof(long int) * 2);

	if (!(isdigit(atol(argv[1]))) && !(isdigit(atol(argv[2]))))
	{
		*(ptr + 0) = atol(argv[1]);
		*(ptr + 1) = atol(argv[2]);

		result = (*(ptr + 0)) * (*(ptr + 1));

		printf("%ld\n", result);
	}
	else
	{
		printf("Error\n");

		exit(98);
	}

	free(ptr);

	return (0);
}
