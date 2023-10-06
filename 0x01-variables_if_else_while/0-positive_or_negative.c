#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *  main - genrates a random number and prints same
 *  Return: 0 if executed successfully
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("is positive\n");
	} else if (n == 0)
	{
		printf("is zero\n");
	} else if (n < 0)
	{
		printf("is negative\n");
	}

	return (0);
}
