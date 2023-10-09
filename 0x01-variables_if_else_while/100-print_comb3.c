#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints combination of two numbers
 * Return: 0 if success
 */

int main(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			if (i < j)
			{
				putchar('0' + i);
				putchar('1' + j);

				if (i != 9)
				{
					putchar(',');
					putchar(' ');
				}

			} else
			{
				{};
			}

		}
	}
	putchar('\n');
	return (0);
}
