#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabets x10
 * @void: takes not argument
 */

void print_alphabet_x10(void)
{
	int i, j;
	int num_of_prints = 10;
	int len_alphabets = 26;
	char alphabets[] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < num_of_prints; i++)
	{
		for (j = 0; j < len_alphabets; j++)
		{
			_putchar(alphabets[j]);
		}
		_putchar('\n');
	}
}
