#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all the digits
 * Return: 0 if success
 */

int main(void)
{
	int i;
	int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int len_arr = sizeof(arr) / sizeof(arr[0]);

	for (i = 0; i <= len_arr - 1; i++)
		putchar('0' + arr[i]);
	for (i = 0; i <= len_arr - 2; i++)
		putchar(',');
	for (i = 0; i <= len_arr - 2; i++)
		putchar(' ');
	putchar('\n');
	return (0);
}
