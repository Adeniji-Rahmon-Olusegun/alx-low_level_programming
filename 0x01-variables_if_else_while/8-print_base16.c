#include <stdio.h>
#include <string.h>

/**
 * main - prints lower and upper case alpha
 * Return: 0 if successfully exec.
 */

int main(void)
{
	int i;
	int j;
	int lim = 10;
	char lower_alpha[] = "abcdef";
	size_t alpha_len = strlen(lower_alpha);

	for (i = 0; i <= lim - 1; i++)
		putchar('0' + i);
	for (j = 0; j <= (signed int) alpha_len - 1; j++)
		putchar(lower_alpha[j]);
	putchar('\n');
	return (0);
}
