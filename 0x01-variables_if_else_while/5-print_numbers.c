#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all the digits
 * Return: 0 if success
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
		putchar('\n');
	}
	return (0);
}
