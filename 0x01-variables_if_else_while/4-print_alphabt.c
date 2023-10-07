#include <stdio.h>
#include <string.h>

/**
 * main - prints all alphabets except q and e
 * Return: 0 if executed successfully
 */

int main(void)
{
	int i;
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";
	size_t str_len = strlen(alpha);

	for (i = 0; i <= (signed int) str_len - 1; i++)
	{
		if (alpha[i] != 'q' || alpha[i] != 'e')
		{
			putchar(alpha[i]);
		} else
		{
			{};
		}
	putchar('\n');
	return (0);
	}
}
