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
			printf("Fizz");
			printf(" ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
			printf(" ");
		}
		else if ((i % 3 == 0) && (i % 5))
		{
			printf("FizzBuzz");
			printf(" ");
		}
		else
		{
			printf("%d", i);
			printf(" ");
		}
	}
	printf("\n");
}
