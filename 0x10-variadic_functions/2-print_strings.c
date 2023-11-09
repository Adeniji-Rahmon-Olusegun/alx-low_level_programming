#include <stddef.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings followed by a new line
 *
 * @separator: separates strings printed
 * @n: number of strings
 * @...: elipse
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int idx;
	char *strv;
	va_list ps_arg;

	va_start(ps_arg, n);

	for (idx = 0; idx < n; idx++)
	{
		strv = va_arg(ps_arg, char *);

		if (strv != NULL)
		{
			printf("%s", strv);
		}
		else if (strv == NULL)
		{
			printf("(nil)");
		}

		if ((idx < n - 1) && (separator != NULL))
		{
			printf("%s", separator);
		}
	}

	va_end(ps_arg);

	printf("\n");
}
