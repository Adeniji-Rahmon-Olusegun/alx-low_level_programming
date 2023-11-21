#include "lists.h"

/**
 * free_listint - frees a single linked list
 *
 * @head: head of the list
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *temp_var, *current_node;

	if (head == NULL)
	{
		return;
	}

	temp_var = head;


	while (temp_var != NULL)
	{
		current_node = temp_var;
		temp_var = temp_var->next;
		free(current_node);
	}
}
