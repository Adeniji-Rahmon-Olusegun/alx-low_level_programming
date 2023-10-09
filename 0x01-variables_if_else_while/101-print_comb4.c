#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints combination of three lines
 * Return: 0 if success
 */

int main(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			for (k = i + 2; k < 10; k++)
			{
				if (i < j && j < k)
				{
					putchar('0' + i);
					putchar('0' + j);
					putchar('0' + k);

					if (i != 7)
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
}
