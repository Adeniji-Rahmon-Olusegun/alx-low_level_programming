#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 *
 * @n: number of varible parameters
 * @...: elipse
 *
 * Return: sum of all parameter
 */

int sum_them_all(const unsigned int n, ...)
{
	int add;
	unsigned int idx;
	va_list add_arg;

	va_start(add_arg, n);

	if (n == 0)
	{
		return (0);
	}

	add = 0;

	for (idx = 0; idx < n; idx++)
	{
		add += va_arg(add_arg, int);
	}

	va_end(add_arg);

	return (add);
}
