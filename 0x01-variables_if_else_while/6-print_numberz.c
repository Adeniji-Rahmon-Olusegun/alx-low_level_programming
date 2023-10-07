#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints digits
 * Return: 0 if success
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar('0' + i);
	putchar('\n');
	return (0);
}
