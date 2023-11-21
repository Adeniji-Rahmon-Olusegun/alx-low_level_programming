#include "lists.h"

/**
 * print_listint - prints the list of elements
 * in the single linked list
 *
 * @h: head of the single linked list
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *temp_var;
	size_t len_slinked_list;

	if (h == NULL)
		return (0);

	temp_var = h;
	len_slinked_list = 0;

	while (temp_var != NULL)
	{
		len_slinked_list++;
		printf("%d\n", temp_var->n);
		temp_var = temp_var->next;
	}

	return (len_slinked_list);
}
