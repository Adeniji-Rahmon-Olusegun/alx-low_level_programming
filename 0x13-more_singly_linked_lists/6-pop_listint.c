#include "lists.h"

/**
 * pop_listint - deletes the head of the node
 * of a single linked list and returns the head
 * node's data
 *
 * @head: head of the node
 *
 * Return: head node's data
 */

int pop_listint(listint_t **head)
{
	int node_data;
	listint_t *temp_var;

	if (head == NULL)
		return (0);

	if (*head == NULL)
		return (0);

	temp_var = *head;
	node_data = temp_var->n;

	*head = (*head)->next;

	free(temp_var);

	return (node_data);
}
