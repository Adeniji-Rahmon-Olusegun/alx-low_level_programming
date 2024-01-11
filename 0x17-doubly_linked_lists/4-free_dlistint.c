#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 *
 * @head: head of the list
 *
 * Return: None
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp_var, *del_node;

	if (head->next == NULL)
		free(head);

	temp_var = head;

	while (temp_var->next != NULL)
	{
		del_node = head;
		temp_var = temp_var->next;
		head = head->next;
		free(del_node);
	}
	free(temp_var);
}
