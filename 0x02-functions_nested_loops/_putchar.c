#include <unistd.h>
/**
 * _putchar - prints character to stdout
 * @character: caharacter to print
 * Return: character to print
 */
int _putchar(char character)
{
        return (write(1, &character, 1));
}
