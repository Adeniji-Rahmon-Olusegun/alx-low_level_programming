#include "lists.h"

/**
 * print_list - prints all the elements of
 * a single linked list
 *
 * @h: head of and pointer to list_t
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t counts_of_nodes = 0;

	if (h == NULL)
		return (1);

	while (h != NULL)
	{
		if ((h->str) == NULL)
		{
			printf("[0] (nil)\n");
		}

		printf("[%u] %s\n", h->len, h->str);

		h = h->next;

		counts_of_nodes++;
	}
	return (counts_of_nodes);
}
