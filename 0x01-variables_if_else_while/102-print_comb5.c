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
	int k;
	int l;

	for (i = 0; i < 100; i++)
	{
		for (j = i + 1; j < 100; j++)
		
			if (i < 10)
			{
				putchar('0' + 0);
				putchar('0' + i);
			} else
			{
				putchar('0' + i);
			}
			putchar(' ');
			
			if (j < 10)
			{
				putchar('0' + 0);
				putchar('0' + j)
			}
			
	}
	putchar('\n');
	return (0);
}
