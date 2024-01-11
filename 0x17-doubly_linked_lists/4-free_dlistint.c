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
	dlistint_t *temp_var;

	while (head != NULL)
	{
		temp_var = head;
		head = head->next;
		free(temp_var);
	}
}
