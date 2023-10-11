#include <stdio.h>

/**
 * main - prints multiples of 3 and 5
 * Return: 0 if success
 */

int main(void)
{
	int i;
	int n = 1024;
	int result = 0;

	for (i = 0; i < n; i++)
	{
		if (i % 3 == 0)
		{
			result = result + i;
		} else if (i % 5 == 0)
		{
			result = result + i;
		}
	}
	printf("%d\n", result);

	return (0);
}
