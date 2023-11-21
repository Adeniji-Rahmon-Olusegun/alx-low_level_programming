#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a
 * single linked list
 *
 * @head: head of the list
 * @n: data to be stored in the fresh node
 *
 * Return: updated single linked list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp_var, *fresh_node;

	if (head == NULL)
		return (NULL);

	fresh_node = (listint_t *)malloc(sizeof(listint_t));

	if (fresh_node == NULL)
		return (NULL);

	fresh_node->n = n;
	fresh_node->next = NULL;

	if (*head == NULL)
	{
		*head = fresh_node;
		return (*head);
	}

	temp_var = *head;

	while (temp_var->next != NULL)
	{
		temp_var = temp_var->next;
	}

	temp_var->next = fresh_node;

	return (*head);
}
