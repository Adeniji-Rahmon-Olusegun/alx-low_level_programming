#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main - prints the result of arithmetic
 * operation between two numbers
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
	int arg1, arg2, result;
	int (*arithmetic)(int, int);

	if (argc < 4 || argc > 4)
	{
		printf("Error\n");
		exit(98);
	}

	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);

	if (
	    strcmp(argv[2], "+") != 0 &&
	    strcmp(argv[2], "-") != 0 &&
	    strcmp(argv[2], "*") != 0 &&
	    strcmp(argv[2], "/") != 0 &&
	    strcmp(argv[2], "%") != 0)
	{
		printf("Error\n");
		exit(99);
	}

	if (
	   (strcmp(argv[2], "/") == 0 && atoi(argv[3]) == 0) ||
	   (strcmp(argv[2], "%") == 0 && atoi(argv[3]) == 0))
	{
		printf("Error\n");
		exit(100);
	}

	arithmetic = get_op_func(argv[2]);

	result = (*arithmetic)(arg1, arg2);

	printf("%d\n", result);

	return (0);
}
