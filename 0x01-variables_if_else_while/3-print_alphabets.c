#include <stdio.h>
#include <string.h>

/**
 * main - prints lower and upper case alpha
 * Return: 0 if successfully exec.
 */

int main(void)
{
	int i;
	char lower_alpha[] = "abcdefghijklmnopqrstuvwxyz";
	char upper_alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	size_t alpha_len = strlen(lower_alpha);

	for (i = 0; i <= (signed int) alpha_len - 1; i++)
	{
		putchar(lower_alpha[i]);
		putchar(upper_alpha[i]);
	}
	putchar('\n');
	return (0);
}
