#include "function_pointers.h"

/**
 * print_name - prints a name using the power
 * of function pointer
 *
 * @name: string to be printed
 * @f: function pointer
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != "")
	{
		(*f)(name);
	}
}
