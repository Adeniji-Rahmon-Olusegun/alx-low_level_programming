#include "lists.h"

/**
 * reverse_listint - reverses a single linked list
 *
 * @head: head of the list
 *
 * Return: pointer to the first node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *previousNode, *nextNode;

	if (head == NULL)
		return (NULL);

	if (*head == NULL)
		return (NULL);

	nextNode = *head;
	previousNode = NULL;

	while (nextNode != NULL)
	{
		nextNode = nextNode->next;
		(*head)->next = previousNode;
		previousNode = *head;
		*head = nextNode;
	}
	*head = previousNode;

	return (*head);
}
