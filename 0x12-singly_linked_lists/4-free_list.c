#include "lists.h"

/**
 * free_list - frees memory allocated to single
 * list link
 *
 * @head: head of the list
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *temp_var, *next_node;

	temp_var = head;

	while (temp_var != NULL)
	{
		next_node = temp_var->next;
		free(temp_var);
		temp_var = next_node;
	}
}
