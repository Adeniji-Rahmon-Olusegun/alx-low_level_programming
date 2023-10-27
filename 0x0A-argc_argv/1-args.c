#include <stdio.h>

/**
 * main - prints the number of arguments passed
 * @argc: vector/string count
 * @argv: vector
 * Return: 0 if success
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
