#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end
 * of a doubly linked list
 *
 * @head: head of the linked list
 * @n: data value to be stored in the linked list
 *
 * Return: Address of the new node added.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *fresh_node, *temp;

	if (head == NULL)
		return (NULL);

	fresh_node = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (fresh_node == NULL)
		return (NULL);

	if (*head == NULL)
	{
		fresh_node->n = n;
		fresh_node->prev = NULL;
		fresh_node->next = NULL;
		*head = fresh_node;
		return (fresh_node);
	}

	fresh_node->n = n;
	fresh_node->prev = NULL;
	fresh_node->next = NULL;

	temp = *head;

	while (temp->next != NULL)
		temp = temp->next;
	temp->next = fresh_node;
	fresh_node->prev = temp;
	temp = fresh_node;

	return (fresh_node);
}
