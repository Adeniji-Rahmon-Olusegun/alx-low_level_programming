#include "main.h"
#include <stdio.h>

/**
 * main - prints 1 to 100 in the fizzbuzz way
 * Return: 0 if success
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("%s", "Fizz");
			printf(" ");
		}
		else if (i % 5 == 0)
		{
			printf("%s", "Buzz");
			printf(" ");
		}
		else if ((i % 3 == 0) && (i % 5))
		{
			printf("%s", "FizzBuzz");
			printf(" ");
		}
		else
		{
			printf("%d", i);
			printf(" ");
		}

		if (i != 100)
		{
			printf(" ");
		}
	}
	printf("\n");

	return (0);
}
