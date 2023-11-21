#include "lists.h"

/**
 * free_listint2 - frees the nodes of a single
 * linked list and set the head to NULL
 *
 * @head: head of the list
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp_var, *current_node;

	if (*head == NULL)
	{
		return;
	}

	temp_var = *head;

	while (temp_var != NULL)
	{
		current_node = temp_var;
		temp_var = temp_var->next;
		free(current_node);
	}

	*head = NULL;

}
