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
	const list_t *temp_var;
	size_t counts_of_nodes;
	
	counts_of_nodes = 0;

	if (temp_var == NULL)
		return (1);

	while (temp_var != NULL)
	{
		if ((temp_var->str) == NULL)
		{
			printf("[%u] %s\n", 0, "(nil)");
		}

		printf("[%u] %s\n", temp_var->len, temp_var->str);

		temp_var = temp_var->next;

		counts_of_nodes++;
	}
	return (counts_of_nodes);
}
