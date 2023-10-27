#include <stdio.h>

/**
 * main - multiplies two number
 * @argc: argument count
 * @argv: vector
 * Return: result and 1 otherwise
 */

int main(int argc, char *argv[])
{
	if (argc - 1 > 2 || argc - 1 < 2)
	{
		printf("Error");

		return (1);
	}

	return (argv[1] * argv[2]);
}
