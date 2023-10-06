#include <unistd.h>
/**
 * main - prints text to std error without using printf
 * Return: one
 */
int main(void)
{
	char text[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, text, 59);

	return (1);
}
