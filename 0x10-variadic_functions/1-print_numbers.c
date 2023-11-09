#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_numbers - prints numbers follwed by a new line
 *
 * @separator: string inbetween numbers
 * @n: number of variable argument
 * @...: elipse
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int idx;
	va_list pn_arg;

	va_start(pn_arg, n);

	for (idx = 0; idx < n, idx++)
	{
		printf("%d", va_arg(pn_arg, int));

		if ((idx < n - 1) && (separator != NULL))
		{
			printf("%s", separator);
		}
	}

	va_end(pn_arg);

	printf("\n");
}
