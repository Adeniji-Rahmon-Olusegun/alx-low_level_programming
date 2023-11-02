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
	int *ptr;
	int result;

	if ((argc - 1) < 2 || (argc - 1) > 2)
	{
		printf("Error\n");

		exit(98);
	}

	ptr = (int *)malloc(sizeof(int) * 2);

	if (!(isdigit(atoi(argv[1]))) && !(isdigit(atoi(argv[2]))))
	{
		*(ptr + 0) = atoi(argv[1]);
		*(ptr + 1) = atoi(argv[2]);

		result = *(ptr + 0) * *(ptr + 1);

		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");

		exit(98);
	}

	free(ptr);

	return (0);
}
