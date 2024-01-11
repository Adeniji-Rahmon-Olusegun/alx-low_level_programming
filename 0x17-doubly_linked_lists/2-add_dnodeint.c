#include "lists.h"

/**
 * add_dnodeint - adds a node at the beginning
 * of a doubly linked list
 *
 * @head: address of the head
 * @n: data value to be stored in new node
 *
 * Return: Address to the new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *fresh_node;

	if (*head == NULL)
		return (NULL);

	fresh_node = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (fresh_node == NULL)
		return (NULL);

	fresh_node->n = n;
	fresh_node->prev = NULL;
	fresh_node->next = NULL;

	(*head)->prev = fresh_node;
	fresh_node->next = *head;
	*head = fresh_node;

	return (fresh_node);
}
