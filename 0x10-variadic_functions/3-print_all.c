#include "variadic_functions.h"
#include <stddef.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * print_all - prints anything
 *
 * @format: format specifier
 * @...: elipse
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int f_index;
	char *string_checker;
	va_list anything_arg;

	va_start(anything_arg, format);
	f_index = 0;
	while (format && format[f_index] != '\0')
	{
		switch (format[f_index])
		{
			case 'c':
				printf("%c", va_arg(anything_arg, int));
				break;
			case 'i':
				printf("%d", va_arg(anything_arg, int));
				break;
			case 'f':
				printf("%f", va_arg(anything_arg, double));
				break;
			case 's':
				string_checker = va_arg(anything_arg, char *);
				if (string_checker == NULL || strlen(string_checker) == 0)
				{
					string_checker = "(nil)";
				}
				printf("%s", string_checker);
				break;
			default:
				break;
		}
		f_index++;
		if (format[f_index] == 'c' || format[f_index] == 'i' ||
		    format[f_index] == 'f' || format[f_index] == 's' ||
		    format[f_index + 1] != '\0')
		{
			printf(", ");
		}
	}
	va_end(anything_arg);
	printf("\n");
}
