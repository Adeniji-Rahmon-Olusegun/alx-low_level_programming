#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the combinatio of two two-digits
 * Return: 0 if success
 */

int main(void)
{
	int i;
	int j;

	for (i = 0; i < 100; i++)
	{
		for (j = i + 1; j < 100; j++)
		{
			putchar('0' + i);
			putchar('0' + i);
			putchar(' ');
			putchar('0' + j - 1);
			putchar('0' + j);

			if (i != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
