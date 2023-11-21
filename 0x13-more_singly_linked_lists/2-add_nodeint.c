#include "lists.h"

/**
 * add_nodeint - adds a node at the beginning
 * of a single linked list
 *
 * @head: head of the list
 * @n: data to be stored at new node
 *
 * Return: updated list
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *fresh_node;

	fresh_node = (listint_t *)malloc(sizeof(listint_t));

	if (fresh_node == NULL)
		return (NULL);

	fresh_node->n = n;

	fresh_node->next = *head;

	*head = fresh_node;

	return (*head);
}
