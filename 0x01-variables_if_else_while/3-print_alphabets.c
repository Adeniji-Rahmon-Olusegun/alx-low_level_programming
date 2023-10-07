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
	char lower_alpha[] = "abcdefghijklmnopqrstuvwxyz";
	char upper_alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	size_t alpha_len = strlen(lower_alpha);

	for (i = 0; i <= (signed int) alpha_len - 1; i++)
		putchar(lower_alpha[i]);
	for (j = 0; j <= (signed int) alpha_len - 1; j++)
		putchar(upper_alpha[j]);
	putchar('\n');
	return (0);
}
