#include <stdio.h>
#include <string.h>

/**
 * main - prints the alphabets in lower case
 * Return: 0 if executed successfully
 */

int main(void)
{
	int i;
	char alphabets[26] = "abcdefghijklmnopqrstuvwxyz";
	size_t alpha_len = strlen(alphabets);

	for (i = 0; i <= alpha_len; i++)
		putchar(alphabets[i]);
	return (0);
}
