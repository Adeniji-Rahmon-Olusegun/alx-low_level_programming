#include "main.h"
#include <unistd.h>
/**
 * _putchar - prints character to stdout
 * @character: caharacter to print
 * Return: character to print
 */
void _putchar(char character)
{
	return (write(1, &character, 1));
}

/**
 * main - prints _putchar
 * Return: 0 if success
 */


int main(void)
{
	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');

	return (0);
}
