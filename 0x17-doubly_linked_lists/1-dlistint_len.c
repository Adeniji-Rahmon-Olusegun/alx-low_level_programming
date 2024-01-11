#include "lists.h"

/**
 * dlistint_len - obtains the length of a doubly
 * linked list.
 *
 * @h: head of the list
 *
 * Return: The length of the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count_ndll;
	dlistint_t const *temp_var;

	count_ndll = 0;
	temp_var = h;

	while (temp_var != NULL)
	{
		count_ndll++;
		temp_var = temp_var->next;
	}

	return (count_ndll);
}
