#include "lists.h"

/**
 * print_dlistint - prints all the elements of a
 * doubly linked list.
 *
 * @h: head of the doubly linked list
 *
 * Return: number of nodes in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	int count_ndll;

	dlistint_t *temp_var;

	temp_var = h;

	count_ndll = 0;

	while (temp_var != NULL)
	{
		printf("%d\n", temp_var->n);
		temp_var = temp_var->next;
		count_ndll++;
	}

	return (count_ndll);
}
