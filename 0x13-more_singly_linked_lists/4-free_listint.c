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
	listint_t *temp_var;

	if (head == NULL)
	{
		return;
	}

	while (temp_var != NULL)
	{
		temp_var = head;
		head = head->next;
		free(temp_var);
	}

	free(temp_var);
	free(head);
}
