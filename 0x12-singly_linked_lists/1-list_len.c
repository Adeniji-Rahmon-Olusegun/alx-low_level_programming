#include "lists.h"

/**
 * list_len - returns the length of a
 * linked list
 *
 * @h: head of the single-linked-list
 *
 * Return: length of list
 */

size_t list_len(const list_t *h)
{
	const list_t *temp_var;
	size_t counts_of_nodes;

	if (h == NULL)
	{
		return (0);
	}

	temp_var = h;

	counts_of_nodes = 0;

	while (temp_var != NULL)
	{
		counts_of_nodes++;
		temp_var = temp_var->next;
	}

	return (counts_of_nodes);
}
