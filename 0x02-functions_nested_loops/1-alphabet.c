#include "main.h"

/**
 * print_alphabet - prints all the alphabets
 * @void: receives no argument
 */

void print_alphabet(void)
{
	int i;
	char alphabets[] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < 26; i++)
	{
		_putchar(alphabets[i]);
	}

	_putchar('\n');
}

/**
 * main - prints all alphabets in lowercase
 * Return: 0 if success
 */

int main(void)
{
	print_alphabet();
	return (0);
}
